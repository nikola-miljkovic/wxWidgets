package org.wxwidgets;

import java.util.ArrayList;

import android.content.Intent;
import android.util.Log;
import android.view.View;

public class WXCalls {
	
	public static void addView(int id, int parentId, int width, int height, int x, int y, String classStr) {
		WXFrameActivity frame = WXApp.m_frameMap.get(parentId);
		
		if(frame == null) {
			WXApp.m_viewList.get(parentId).add(new WXView(id, parentId, new WXPair(x, y), 
				new WXPair(width, height), classStr));
		}
		else {
			WXView view = new WXView(id, parentId, new WXPair(x, y), new WXPair(width, height), classStr);
			WXApp.m_viewList.get(parentId).add(view);
			frame.putView(view.createView(frame), parentId, width, height, x, y);
		}
	}
	
	//
    //    New wxFrame/wxDialog window
    //
    public static void createWindow(final int id, final String title) {
		try {
			WXApp.m_viewList.put(id, new ArrayList<WXView>());
			Log.d(title, title);
			if(WXApp.MAIN_ACTIVITY_INITIATED) {
				Intent intent = new Intent(WXApp.MAIN_ACTIVITY, WXFrameActivity.class);
				intent.putExtra("WX_TITLE", title);
				intent.putExtra("WX_ID", id);
				WXApp.MAIN_ACTIVITY.startActivityForResult(intent, 0);
			}
			else {
				WXApp.MAIN_ACTIVITY.create(id, title);
				WXApp.MAIN_ACTIVITY_INITIATED = true;
			}
	    } catch (Exception e) {
	    	e.printStackTrace();
	    }
    }
    
    public static void invokeMethod() {
    	
    }
}
