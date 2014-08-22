package org.wxwidgets;

import java.util.ArrayList;
import java.util.Queue;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;

public class WXFrameActivity extends Activity {

	private WXLayout m_layout = null;
	private int m_wxId = -1;
	
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        
        // common init for both cases 
        m_layout = new WXLayout(this);
		setContentView(m_layout);
		
        if(WXApp.MAIN_ACTIVITY_CREATED) {// this is not MainActivity ~ TopLevel
        	Bundle extras = getIntent().getExtras();
	        this.create(extras.getInt("WX_ID"), extras.getString("WX_TITLE"));
        }
        else {
        	WXApp.MAIN_ACTIVITY = this;
        	WXNative.wxStart();
        }
    }
    
    public void create(int id, String title) {
    	m_wxId = id;

        ArrayList<WXView> view_list = WXApp.m_viewList.get(m_wxId);
        for(WXView view : view_list) {
        	this.putView(view.createView(this), 
        			view.m_id, view.m_size.m_x, view.m_size.m_y, 
        			view.m_position.m_x, view.m_position.m_y);
        }
        
        // "signal that we exist and can be used"
        WXApp.m_frameMap.put(id, this); 
    	this.setTitle(title);
    	
    	//execute action queue 
    	Queue<Runnable> actions = WXApp.m_actionQueue.get(id);
    	for(Runnable action : actions) {
    		runOnUiThread(action);
    	}
    	
        //getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
        	//WindowManager.LayoutParams.FLAG_FULLSCREEN);
	}  
    
    @Override
	public void onResume() {
		WXApp.TOP_ACTIVITY = this;
		super.onResume();
	}
    
	@Override
    public void onDestroy() {
		// since this is onDestroy, we can remove us from viewMap
    	WXApp.wipeViews(m_wxId);
    	WXApp.m_frameMap.remove(m_wxId);
    	
    	if(WXApp.MAIN_ACTIVITY == this) {
    	    WXApp.MAIN_ACTIVITY_CREATED = false;
    		WXNative.wxEnd();
    	}
    	
    	super.onDestroy();
    }
    
    public void putView(final View view,final int id,final int width,final int height,final int x,final int y) {    	
    	runOnUiThread(new Runnable() {
    		
    		@Override
    		public void run() {
    			m_layout.addView(view, WXApp.makeParams(width, height, x, y));
    		}
    	});
    }
    
    static {
        System.loadLibrary("wxAPP");
    }

}