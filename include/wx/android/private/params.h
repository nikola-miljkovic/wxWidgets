/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/private/params.h
// Purpose:	Used for constructing arguments and jobjects 
//  for method to Invoke
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_PARAMS_H_
#define _WX_ANDROID_PARAMS_H_

#include "wx/android/private/globals.h"
#include "wx/android/private/wrappers.h"
#include "wx/android/private/definitions.h"

// Use example for android.widget.TextView method public void setTextSize (int unit, float size):
// MethodParams params(2);
// params.AddParam(JINT, 0); // unit -> px
// params.AddParam(JFLOAT, 5.0f); // size of 5
// INVOKE_VIEW_METHOD("setTextSize", params.GetTypes(), params.GetValues());
//
// Maximum is 15
// Programmer needs to ensure that size matches number of parameters.

class MethodParams
{
    public:
    	MethodParams(int size);
	~MethodParams();

	void AddParam(WXParam type, jboolean value);
	void AddParam(WXParam type, jbyte value);
	void AddParam(WXParam type, jchar value);
	void AddParam(WXParam type, jshort value);
	void AddParam(WXParam type, jint value);
	void AddParam(WXParam type, jlong value);
	void AddParam(WXParam type, jfloat value);
	void AddParam(WXParam type, jdouble value);
	void AddParam(WXParam type, jobject value);

	long long	GetTypes();
	jobjectArray  	GetValues();
    private:

        int 		m_count;
	long long	m_params;
	jobjectArray  	m_args;
};

#endif // _WX_ANDROID_PARAMS_H_
