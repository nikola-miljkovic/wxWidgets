package org.wxwidgets;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.Window;
import android.view.WindowManager;

public class MainActivity extends Activity {
    // jint Java_org_wxwidgets_MainActivity_wxStart(JNIEnv* env, jobject thiz)
    private native int wxStart();
	// jint Java_org_wxwidgets_MainActivity_wxEnd(JNIEnv* env, jobject thiz)
    private native int wxEnd();

    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        

        requestWindowFeature(Window.FEATURE_NO_TITLE);

        // This can be change to have de-facto implemenation
        //  of Get/SetFullscreen for wxWindow 
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
        		WindowManager.LayoutParams.FLAG_FULLSCREEN);
        
        // Start wxWidgets CPP part
        wxStart();
    }
    
    // Start new FrameActivity that responds to wxFrame/wxDialog
    public void newWindow(String title) {
    	Intent intent = new Intent(this, FrameActivity.class);
    	intent.putExtra("WX_TITLE", title);

        // ForResult allows MainActivity to continue running
        // While we controll our new Activity in separate 
        // thread.
    	startActivityForResult(intent, 0);
    }
    
    @Override
    public void onDestroy() {
        super.onDestroy();

        wxEnd();
    }
    
    static {
        // Java uses following format:
        // lib<app_name>.so
        // Static wxWidgets library: 
        // Call following to connect compiled wxWidgets app to Java

        //System.loadLibrary("<app_name>");

        // Shared wxWidgets library:
        // First you need to load each wxWidgets library
        // application depends on. In case of single file version
        // where name of compiled and used wxWidgets library is
        // "libwx_androidu.so" it would look like this:

        //System.loadLibrary("wx_androidu");
        //System.loadLibrary("<app_name>");
    }   
}
