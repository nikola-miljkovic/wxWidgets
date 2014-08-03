/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/private/native.cpp
// Purpose:	    java/android native function definitions
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#include "wx/app.h"
#include "wx/init.h"
#include "wx/control.h"

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

jint Java_org_wxwidgets_WXNative_wxStart(JNIEnv* env, jclass thiz)
{
	wxAndroid::Env = env;
	wxAndroid::wxCalls = reinterpret_cast<jclass>(env->NewGlobalRef(env->FindClass(WXCALLS))); 
	
	// find all method ID's for boxed objects
	for(int i = 1; i < WXPARAM_END; i++) {
		wxAndroid::objClassReferences[i] = 
			reinterpret_cast<jclass>(env->NewGlobalRef(env->FindClass(jobjects[i])));
		wxAndroid::objInitMethodID[i] = 
			env->GetMethodID(wxAndroid::objClassReferences[i], "<init>", jparams[i]);
	}

	wxTheApp->CallOnInit();

	return 1;
}

jint Java_org_wxwidgets_WXNative_wxEnd(JNIEnv* env, jclass thiz)
{
	wxAndroid::Env = env;

	return 1;
}	

void Java_org_wxwidgets_WXNative_wxOnClickView(JNIEnv * env, jclass thiz, jlong ptr) 
{
    wxControl* control = reinterpret_cast<wxControl*>(ptr);
    wxCommandEvent event(wxEVT_BUTTON, control->GetId());
    event.SetEventObject(control);
    control->HandleWindowEvent(event);
}					

void Java_org_wxwidgets_WXNative_wxOnTextChanged(JNIEnv * env, jclass thiz, jlong ptr, jstring value)		
{
	wxControl * control = reinterpret_cast<wxControl*>(ptr);
	if(control) 
	{
	    const char * str = env->GetStringUTFChars(value, 0);
        control->SetLabel(wxString::FromUTF8(str));

        env->ReleaseStringUTFChars(value, str);
	}	
}																																								