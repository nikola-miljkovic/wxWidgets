package org.wxwidgets;

import java.util.ArrayList;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.RelativeLayout;

public class FrameActivity extends Activity {
	//private native int wxRegisterFrame();
	//private native int wxUnregisterFrame();

	private RelativeLayout m_layout = null;
	private int m_wxId = -1;
	
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        
        m_layout = new RelativeLayout(this);
		setContentView(m_layout);
		
        //getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
        		//WindowManager.LayoutParams.FLAG_FULLSCREEN);
        
        Bundle extras = getIntent().getExtras();
        if (extras != null) {
        	m_wxId = extras.getInt("WX_ID");
        	WXApp.insertFrame(extras.getInt("WX_ID"), this);
        	String tittle = extras.getString("WX_TITLE");
        	Log.d("ID", Integer.toString(extras.getInt("WX_ID")));
        	if(tittle != "") // not isEmpty, requires newer API
        		setTitle(tittle);
        	else
        		setTitle("wxAndroid Window");
        }
        
        ArrayList<WXView> view_list = WXApp.m_viewList.get(m_wxId);
        
        for(WXView view : view_list) {
        	Log.d("AQBCC", "AQBCC");
        	addViewZ(view.createMe(this), 
        			view.m_id, view.m_size.x, view.m_size.y, view.m_position.x, view.m_position.y);
        }
    }
    
    public RelativeLayout getLayout() {
    	return m_layout;
    }
    
    public void addViewZ(final View view,final int id,final int width,final int height,final int x,final int y) {
    	//if(m_layout == null)
    		//return;
    	
    	WXApp.insertView(id, view);
    	m_layout.addView(view, WXApp.MAIN_ACTIVITY.makeParams(width, height, x, y));
    }
    
    /*
    public void addView(final View view,final int id,final int width,final int height,final int x,final int y) {
    	runOnUiThread(new Runnable() {
    		@Override
    		public void run() {
    			// TODO Auto-generated method stub
    			addViewZ(view, id, width, height, x, y);
    		}
    	});
    }*/
    
    @Override
    public void onDestroy() {
    	WXApp.wipeViews(this);
    	super.onDestroy();
    }
}
