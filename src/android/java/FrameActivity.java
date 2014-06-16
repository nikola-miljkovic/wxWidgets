package org.wxwidgets;

import android.app.Activity;
import android.os.Bundle;
import android.view.WindowManager;

public class FrameActivity extends Activity {
    // jint Java_org_wxwidgets_FrameActivity_wxRegisterFrame(JNIEnv* env, jobject thiz)
	private native int wxRegisterFrame();
	
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
        		WindowManager.LayoutParams.FLAG_FULLSCREEN);
        
        Bundle extras = getIntent().getExtras();
        if (extras != null) {
            String value = extras.getString("WX_TITLE");
            setTitle(value);
        }
        
        // wxRegisterFrame's purpose is to connect this object
        // with wxFrame/Dialog's base wxTopLevelWindow 
        wxRegisterFrame();
    }
}
