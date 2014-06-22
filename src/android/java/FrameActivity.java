package org.wxwidgets;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.view.WindowManager;
import android.widget.RelativeLayout;

public class FrameActivity extends Activity {
	private native int wxRegisterFrame();
	private native int wxUnregisterFrame();
	
	private RelativeLayout m_layout = null;
	
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        
        m_layout = new RelativeLayout(this);
		setContentView(m_layout);
		
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
        		WindowManager.LayoutParams.FLAG_FULLSCREEN);
        
        Bundle extras = getIntent().getExtras();
        if (extras != null) {
        	WXApp.insertFrame(extras.getInt("WX_ID"),this);
        	String tittle = extras.getString("WX_TITLE");
        	if(tittle != "") // not isEmpty, requires newer API
        		setTitle(tittle);
        	else
        		setTitle("wxAndroid Window");
        }
        
        wxRegisterFrame();
    }
    
    public RelativeLayout getLayout() {
    	return m_layout;
    }
    
    public void addView(View view, int id, int width, int height, int x, int y) {
    	WXApp.insertView(id, view);
    	m_layout.addView(view, WXApp.MAIN_ACTIVITY.makeParams(width, height, x, y));
    }
    
    @Override
    public void onDestroy() {
    	WXApp.wipeViews(this);
    	super.onDestroy();
    }
}
