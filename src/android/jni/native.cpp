/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/private/native.cpp
// Purpose:	java/android native function definitions
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#include <wx/app.h>

#include <wx/android/private/definitions.h>
#include <wx/android/private/native.h>
#include <wx/android/private/wrappers.h>
#include <wx/android/private/globals.h>

jint
load(JavaVM* vm, void* reserved)
{
	JNIEnv* env;
	if (vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6) != JNI_OK) {
		return -1;
	}
	return JNI_VERSION_1_6;
}

jint
Java_org_wxwidgets_MainActivity_wxStart(JNIEnv* env, jobject thiz)
{
	wxAndroid::Env = env;
	wxAndroid::Activity = env->NewGlobalRef(thiz);

	if(wxAndroid::ActivityStack.size() == 0) 
	{
		wxAndroid::Application->OnInit();	
	}

	wxAndroid::ActivityStack.push(&thiz);
	return wxAndroid::ActivityStack.size();
}
