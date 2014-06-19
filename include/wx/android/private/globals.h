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
#include "wx/toplevel.h"
#include "wx/android/private/native.h"

namespace wxAndroid
{
// needed for some native functions
extern JNIEnv* Env;
extern jobject MainActivity;
extern jclass  MainActivityClass;

// Holds pointer to wxTLW currently being worked on
extern wxTopLevelWindowAndroid* CurrentWindow;
} // namespace wxAndroid

#endif // _WX_ANDROID_H_

