package org.wxwidgets;

public class WXNative {
    
    public static native int wxStart();
    public static native int wxEnd(); 
    public static native void wxOnClickView(long viewPtr);
    public static native void wxOnTextChanged(long viewPtr, String s);
    
}
