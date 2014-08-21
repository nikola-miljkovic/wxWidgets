package org.wxwidgets;

import java.lang.reflect.Constructor;

import android.content.Context;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.EditText;

public class WXView implements OnClickListener {
    // id
    public int m_id = 0;
    public int m_parentId = 0;
    public WXPair m_position;
    public WXPair m_size;
    public long m_style; // NYI
    public String m_classStr;
    public View m_view = null;
    
    private long m_ptr = 0;
    
    public WXView(int id, long ptr, int parentId, WXPair position, WXPair size, String classStr) {
        m_id = id;
        m_ptr = ptr;
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
            synchronized(m_view) {
                m_view.setOnClickListener(this);
                
                if(viewClass == EditText.class) {
                    EditText textCtrl = (EditText)m_view;
                    synchronized(textCtrl) {
                        textCtrl.addTextChangedListener(new WXTextWatcher(this));
                    }
                }
            }
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
    
    public long getWXPtr() {
        return m_ptr;
    }
    
    @Override
    public void onClick(View v) {
        WXNative.wxOnClickView(m_ptr);
    }
}
