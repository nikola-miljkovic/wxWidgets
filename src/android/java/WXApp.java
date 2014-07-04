package org.wxwidgets;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

import android.app.Application;
import android.view.View;
import android.widget.RelativeLayout;

public class WXApp extends Application {
	public static HashMap<Integer, Queue<Runnable>> m_actionQueue = new HashMap<Integer, Queue<Runnable>>();
	public static HashMap<Integer, ArrayList<WXView>> m_viewList = new HashMap<Integer, ArrayList<WXView>>();
	public static HashMap<Integer, WXFrameActivity> m_frameMap = new HashMap<Integer, WXFrameActivity>();
	
	public static WXFrameActivity MAIN_ACTIVITY = null;
	public static boolean MAIN_ACTIVITY_INITIATED = false;
	
	
	public static void wipeViews(int wxId) {
		ArrayList<WXView> views = m_viewList.get(wxId);
		for(WXView view : views) 
			view.destroy();
	}
	
	public static boolean canQuit() {
		return m_frameMap.isEmpty();
	}
	  
	public static RelativeLayout.LayoutParams makeParams(int width, int height, int x, int y) {
    	RelativeLayout.LayoutParams params = new RelativeLayout.LayoutParams(width, height);
    	params.leftMargin = x; 
    	params.topMargin = y;
    	return params;
    }
}
