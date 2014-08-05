package org.wxwidgets;

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.LinkedList;

import android.content.Intent;
import android.widget.Toast;

public class WXCalls {
    
    public static void addView(int id, int parentId, int width, int height, int x, int y, String classStr, long ptr) {
        WXFrameActivity frame = WXApp.m_frameMap.get(parentId);
        
        if(frame == null) {
            WXApp.m_viewList.get(parentId).add(new WXView(id, ptr, parentId, new WXPair(x, y), 
                new WXPair(width, height), classStr));
        }
        else {
            WXView view = new WXView(id, ptr, parentId, new WXPair(x, y), new WXPair(width, height), classStr);
            WXApp.m_viewList.get(parentId).add(view);
            
            synchronized(frame) {
                frame.putView(view.createView(frame), parentId, width, height, x, y);
            }
        }
    }
    
    // register new wxTLW before displaying it
    public static void registerWindow(final int id) {
        WXApp.m_viewList.put(id, new ArrayList<WXView>());
        WXApp.m_actionQueue.put(id, new LinkedList<Runnable>());
    }
    
    // display new wxTLW
    public static void showWindow(final int id, final String title) {
        try {
            // Check if window for showing is first/main 
            // wxTLW being assigned 
            if(WXApp.MAIN_ACTIVITY_CREATED) {
                Intent intent = new Intent(WXApp.MAIN_ACTIVITY, WXFrameActivity.class);
                intent.putExtra("WX_TITLE", title);
                intent.putExtra("WX_ID", id);
                
                synchronized(WXApp.MAIN_ACTIVITY) {
                    WXApp.MAIN_ACTIVITY.startActivityForResult(intent, 0);
                }
            } else {
                // process wxFrame arguments 
                synchronized(WXApp.MAIN_ACTIVITY) {
                    WXApp.MAIN_ACTIVITY.create(id, title);
                }
                
                WXApp.MAIN_ACTIVITY_CREATED = true;
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    // WXParam enum from C++ "wx/android/private/definitions.h"
    // this is required by invokeViewMethod(...)
    private static Class types[] = {
        null,                     // SKIP  
        boolean.class,         // JBOOLEAN
        byte.class,             // JBYTE
        char.class,             // JCHAR
        short.class,             // JSHORT
        int.class,             // JINT
        long.class,             // JLONG
        float.class,             // JFLOAT
        double.class,            // JDOUBLE
        CharSequence.class,        // JCHSEQ
        String.class,            // JSTRING
        Object.class              // JOBJ
    };
    
    public static void invokeViewMethod(final String methodStr, final int parentId, final int id, final long params, final Object... args) {
        // we need to find view that belongs to this given parent
        ArrayList<WXView> views = WXApp.m_viewList.get(parentId);
        for(WXView v : views) {
            if(v.m_id == id) {
                // to go into runnable this view needs to be final
                final WXView wxview = v;
                
                // We need to construct action that will 
                // unpack parameters and invoke method if found.
                Runnable action = new Runnable() {

                    @Override
                    public void run() {
                            Class viewClass = wxview.m_view.getClass();
                            
                            // unpack argument list
                            // get number of arguments first
                            long paramVal = params;
                            Class[] paramArray = new Class[(int) (paramVal & 0xF)];
                            
                            
                            int i = 0;
                            for(Object arg : args) {
                                paramVal >>= 4;
                                paramArray[i] = types[(int) (paramVal & 0xF)];
                                i++;
                            }
                            
                            // start loop to keep retrying until we reach
                            // oldest class(java.lang.Object)
                            while(true) {
                                try {
                                    Method method = viewClass.getMethod(methodStr, paramArray);
                                    method.invoke(wxview.m_view, args);
                                    break;
                                } catch (IllegalAccessException | IllegalArgumentException | InvocationTargetException e) {
                                    // to-do
                                } catch (NoSuchMethodException e) {
                                    
                                    viewClass = viewClass.getSuperclass();
                                    
                                    // if no SuperClass exists
                                    // no method exists either
                                    // throw error or just print here?
                                    if(viewClass == null)
                                        break;
                                }
                            }
                    }
                };
   
                if(wxview.exists()) {
                    // view does exist and we can run action
                    // on UiThread, but first we need to find parent
                    // and make sure it is locked
                    WXFrameActivity parentRef = WXApp.m_frameMap.get(parentId);
                    synchronized(parentRef) {
                        parentRef.runOnUiThread(action);
                    }
                } 
                else {
                    // view doesn't exist yet
                    // after it is constructed we will execute this method
                    WXApp.m_actionQueue.get(parentId).add(action);
                }
                
                break;
            }
        }
    }
    
    public static void notify(int duration, String text) {
        Toast toast = Toast.makeText(WXApp.TOP_ACTIVITY, text, duration);
        toast.show();
    }
}
