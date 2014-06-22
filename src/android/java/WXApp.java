package org.wxwidgets;

import java.util.HashMap;
import java.util.Map.Entry;

import android.app.Application;
import android.util.Log;
import android.util.Pair;
import android.view.View;

public class WXApp extends Application {
	// ONLY NON NATIVE
	private static HashMap<Integer, View> m_refMap = new HashMap<Integer, View>();
	private static HashMap<Integer, FrameActivity> m_frameMap = new HashMap<Integer, FrameActivity>();
	
	public static MainActivity MAIN_ACTIVITY = null;
	
	public static void insertFrame(int id, FrameActivity frame) {
		m_frameMap.put(id, frame);
	}
	
	public static boolean removeFrame(int id) {
		return m_frameMap.containsKey(id);
	}
	
	public static void insertView(int id, View view) {
		m_refMap.put(id, view);
	}
	
	public static void wipeViews(FrameActivity parent) {
		for(Entry<Integer, View> entry : m_refMap.entrySet()) {
			if(entry.getValue().getContext() == parent) 
				m_refMap.remove(entry.getKey());
		}
	}
	
	public static View getView(int id) {
		return m_refMap.containsKey(id) ? m_refMap.get(id) : null;
	}
	
	public static boolean canQuit() {
		return m_refMap.isEmpty();
	}
	
	static void formatMe() {
		Log.d("HI", "HIHIIHIH");
	}
}
