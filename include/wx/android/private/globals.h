/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/private/globals.h
// Purpose:		Global helpers for wxAndroid
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_H_
#define _WX_ANDROID_H_

#include "wx/app.h"
#include "wx/android/private/native.h"

namespace wxAndroid
{
// needed for some native functions
extern JNIEnv* Env;
extern jobject Activity;

// application
extern wxApp* Application;

// stack that helps manage/reference windows and main activity
extern std::stack<jobject*> ActivityStack;   
} // namespace wxAndroid

#endif // _WX_ANDROID_H_