/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/private/wrappers.h
// Purpose:	wrappers for easier/cleaner usage of jni calls
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_WRAPPERS_H_
#define _WX_ANDROID_WRAPPERS_H_

#include "wx/android/private/globals.h"

/////////////////////////////////////////////////////////////////////////////
//
//    Macros for calling WXCalls methods
//
/////////////////////////////////////////////////////////////////////////////	

#define CALL_STATIC_VOID(_method, _args, ...) \
	wxAndroid::Env->CallStaticVoidMethod(wxAndroid::wxCalls, \
		wxAndroid::Env->GetStaticMethodID(wxAndroid::wxCalls, _method, _args), __VA_ARGS__);

#define INVOKE_VIEW_METHOD(_method, ...) \
	CALL_STATIC_VOID("invokeViewMethod", "(Ljava/lang/String;IIJ[Ljava/lang/Object;)V", wxAndroid::Env->NewStringUTF(_method), __VA_ARGS__);

// Convert wxString to jstring
inline jstring WXSTR(const wxString & str) 
{
	return wxAndroid::Env->NewStringUTF((const char*)str.mb_str(wxConvUTF8));
}

#endif // _WX_ANDROID_WRAPPERS_H_
