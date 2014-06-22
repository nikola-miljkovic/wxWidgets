package org.wxwidgets;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.Window;
import android.view.WindowManager;
import android.widget.RelativeLayout;
import android.widget.RelativeLayout.LayoutParams;


public class MainActivity extends Activity {
    private native int wxStart();
    private native int wxEnd();
	
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        WXApp.MAIN_ACTIVITY = this;
        
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
        		WindowManager.LayoutParams.FLAG_FULLSCREEN);
        
        wxStart();
    }
    
    @Override
    public void onDestroy() {
    	super.onDestroy();

    	wxEnd();
    }
    
    @Override
    protected void onActivityResult(int requestCode, int resultCode,
            Intent data) {
    	if(WXApp.canQuit()) // we can quit application
    		finish();
    }
    
    
    public RelativeLayout.LayoutParams makeParams(int width, int height, int x, int y) {
    	RelativeLayout.LayoutParams params = new LayoutParams(width, height);
    	params.leftMargin = x; 
    	params.topMargin = y;
    	return params;
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
    
    //
    //    New wxFrame/wxDialog window
    //
    public void newWindow(int id, String title) {
    	Intent intent = new Intent(this, FrameActivity.class);
    	intent.putExtra("WX_TITLE", title);
    	intent.putExtra("WX_ID", id);
    	startActivityForResult(intent, 0);
    }
    
    public void newWindow(int id) {
    	newWindow(id, "");
    }
}
