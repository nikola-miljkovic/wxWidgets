/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/private/globals.cpp
// Purpose:		Global helpers for wxAndroid
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#include "wx/android/private/globals.h"
#include "wx/android/private/definitions.h"

namespace wxAndroid
{
    JNIEnv* 	Env;
	jclass  	wxCalls;

	jclass		objClassReferences[WXPARAM_END];
	jmethodID 	objInitMethodID[WXPARAM_END];
}