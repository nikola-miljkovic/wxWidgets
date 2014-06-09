/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/private/globals.cpp
// Purpose:		Global helpers for wxAndroid
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#include "wx/android/private/globals.h"

namespace wxAndroid
{
    JNIEnv* Env;
    jobject MainActivity;
    jclass  MainActivityClass;
    wxTopLevelWindowAndroid* NewWindow;
    std::stack<jobject*> ActivityStack;
} 