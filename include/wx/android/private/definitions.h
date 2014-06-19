/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/private/definitions.h
// Purpose:		Defines for jni calls
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_DEFINES_H_
#define _WX_ANDROID_DEFINES_H_

// Android class binds

// main activity
#define BIND_MAIN_ACTIVITY		"org/wxwidgets/MainActivity"

#define BIND_NEW_WINDOW_METHOD          "newWindow"
#define BIND_NEW_WINDOW_ARGS            "(Ljava/lang/String;J)V"

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

#endif // _WX_ANDROID_DEFINES_H_
