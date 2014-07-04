package org.wxwidgets;

import java.lang.reflect.Constructor;

import android.content.Context;
import android.view.View;

public class WXView {
	// id
	public int m_id = 0;
	public int m_parentId = 0;
	public WXPair m_position;
	public WXPair m_size;
	public long m_style; // NYI
	public String m_classStr;
	public View m_view = null;
	
	public WXView(int id, int parentId, WXPair position, WXPair size, String classStr) {
		m_id = id;
		m_parentId = parentId;
		m_position = position;
		m_size = size;
		m_classStr = classStr;
	}
	
	public WXView(int id, WXPair position, WXPair size, String classStr) {
		m_id = id;
		m_position = position;
		m_size = size;
		m_classStr = classStr;
	}
	
	public View createView(Context context) {
		try {
			Class viewClass = Class.forName(m_classStr);
			Constructor constructor = viewClass.getConstructor(Context.class);
			m_view = (View)constructor.newInstance(context);
		} catch(Exception e)  {
			e.printStackTrace();
		}
		
		return m_view;
	}
	
	public boolean exists() {
		return m_view != null;
	}

	public void destroy() { 
		// TO-DO remove view from layout here
		m_view = null;
	}
}
