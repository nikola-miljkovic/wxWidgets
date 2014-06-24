package org.wxwidgets;

import android.view.View;

public class WXCalls {
	
	public void addView(FrameActivity activity, View view, int id, int width, int height, int x, int y) {
		//View a = new View();
    	//activity.addView(view, id, width, height, x, y);
    }
	
	public static void addView(int id, int parentId, int width, int height, int x, int y, String classStr) {
		WXApp.m_viewList.get(parentId).add(new WXView(id, parentId, new WXPair(x, y), 
				 new WXPair(width, height), classStr));
	}
}
