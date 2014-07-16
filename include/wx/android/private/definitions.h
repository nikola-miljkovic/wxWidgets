/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/private/definitions.h
// Purpose:		Defines for jni calls
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_DEFINITIONS_H_
#define _WX_ANDROID_DEFINITIONS_H_

// Android class binds

// Enum to represent cooresponding types
enum WXParam {
	SKIP,  
	JBOOLEAN,
	JBYTE,
	JCHAR,
	JSHORT,
	JINT,
	JLONG,
	JFLOAT,
        JDOUBLE,
	JCHSEQ,
	JSTRING,
	JOBJ
};

#define WXPARAM_END 8

// String, Object and CharSeq are all jobject
// there is no need for additional code
static const char * const jobjects[] = {
	"",
	"java/lang/Boolean",
	"java/lang/Byte",
	"java/lang/Character",
	"java/lang/Short",
	"java/lang/Integer",
	"java/lang/Long",
	"java/lang/Float",
	"java/lang/Double",
}; 

static const char * const jparams[] = {
	"",
 	"(Z)V",
	"(B)V",
	"(C)V",
	"(S)V",
	"(I)V",
	"(J)V",
	"(F)V",
	"(D)V",
};

// main activity
#define BIND_MAIN_ACTIVITY		"org/wxwidgets/MainActivity"

#define BIND_NEW_WINDOW_METHOD          "newWindow"
#define BIND_NEW_WINDOW_ARGS            "(ILjava/lang/String;)V"

#define WXCALLS 			"org/wxwidgets/WXCalls"

#define WXBUTTON_C			"android.widget.Button"
#define WXTEXTCTRL_C                    "android.widget.EditText"

// frame activity
#define BIND_FRAME_ACTIVITY 		"org/wxwidgets/FrameActivity"

#define BIND_SET_TITLE_METHOD		"setTitle"
#define BIND_SET_TITLE_ARGS		"(Ljava/lang/CharSequence;J)V"

// activity
#define BIND_ACTIVITY			"android/app/Activity"

#define FILL_PARENT			0xffffffff
// parents
#define BIND_LINEAR_LAYOUT 	"android/widget/LinearLayout"

#define BIND_MENU_VIEW			"android/view/Menu"
#define BIND_MENU_ADD_ARGS     "(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;"

#define BIND_OPTIONS_MENU_CLICK "org/wxwidgets/OptionsMenuClick"
#define BIND_MENU_ONCLICKLISTENER_ARGS "(Landroid/view/MenuItem$OnMenuItemClickListener;)Landroid/view/MenuItem;"

// child components
#define BIND_BUTTON 			"android/widget/Button"

#define BIND_BUTTON_CONSTRUCTOR_ARGS "(Landroid/content/Context;)V"

#define BIND_TEXTCTRL "android/widget/TextView"

#define BIND_TEXTCTRL_CONSTRUCTOR_ARGS "(Landroid/content/Context;)V"

#define BIND_TOAST "android/widget/Toast"

//Not being used currently but has been defined for uniformity
#define BIND_TOAST_CONSTRUCTOR_ARGS "(Landroid/content/Context;)V"

//binding to the MotionEvent class for unpacking Motion Events and aiding in handling of Touch Events
#define BIND_MOTION_EVENT "android/view/MotionEvent"

#endif // _WX_ANDROID_DEFINITIONS_H_
