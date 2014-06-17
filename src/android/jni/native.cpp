/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/private/native.cpp
// Purpose:	java/android native function definitions
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#include "wx/app.h"
#include "wx/init.h"

#include "wx/android/private/definitions.h"
#include "wx/android/private/native.h"
#include "wx/android/private/wrappers.h"
#include "wx/android/private/globals.h"

jint wxAndroidEntryStart(JavaVM* vm, void* reserved)
{
	int a = 0;
	wxEntryStart(a, (wxChar**)NULL);

	JNIEnv* env;
	if (vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6) != JNI_OK) {
		return -1;
	}
	return JNI_VERSION_1_6;
}

jint Java_org_wxwidgets_MainActivity_wxStart(JNIEnv* env, jobject thiz)
{
	wxAndroid::Env = env;
	wxAndroid::MainActivity = env->NewGlobalRef(thiz);
    wxAndroid::MainActivityClass = env->GetObjectClass(thiz);

	wxTheApp->CallOnInit();

	wxAndroid::ActivityStack.push(&wxAndroid::MainActivity);
	return wxAndroid::ActivityStack.size();
}

jint Java_org_wxwidgets_MainActivity_wxEnd(JNIEnv* env, jobject thiz)
{
}

jint Java_org_wxwidgets_FrameActivity_wxRegisterFrame(JNIEnv* env, jobject thiz)
{
	if(!wxAndroid::NewWindow)
		return 0;
	
	jobject globalThiz = env->NewGlobalRef(thiz);

	wxAndroid::NewWindow->SetJavaObject(globalThiz, env->GetObjectClass(globalThiz));
	wxAndroid::ActivityStack.push(&globalThiz);

	// We want to know if there was some error, nullcheck at start of method
	wxAndroid::NewWindow = NULL;

	return 1;
}

jint Java_org_wxwidgets_FrameActivity_wxUnregisterFrame(JNIEnv* env, jobject thiz)
{
}