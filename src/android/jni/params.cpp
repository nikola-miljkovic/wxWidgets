///////////////////////////////////////////////////////////////////////////////
// Name:        android/jni/params.cpp
// Purpose:     
// Author:      Nikola Miljkovic
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
///////////////////////////////////////////////////////////////////////////////

#include "wx/android/private/params.h"

MethodParams::MethodParams(int size) 
{
	m_args = wxAndroid::Env->NewObjectArray(size, wxAndroid::Env->FindClass("java/lang/Object"), 0);
	m_count = 0;
	m_params = 0;
}

MethodParams::~MethodParams()
{
}

void MethodParams::AddParam(WXParam type, jboolean value)
{
	AddParam(type, wxAndroid::Env->NewObject( wxAndroid::objClassReferences[type],
	wxAndroid::objInitMethodID[type], value));
}

void MethodParams::AddParam(WXParam type, jbyte value)
{
	AddParam(type, wxAndroid::Env->NewObject( wxAndroid::objClassReferences[type],
	wxAndroid::objInitMethodID[type], value));
}

void MethodParams::AddParam(WXParam type, jchar value)
{
	AddParam(type, wxAndroid::Env->NewObject( wxAndroid::objClassReferences[type],
	wxAndroid::objInitMethodID[type], value));
}

void MethodParams::AddParam(WXParam type, jshort value)
{
	AddParam(type, wxAndroid::Env->NewObject( wxAndroid::objClassReferences[type],
	wxAndroid::objInitMethodID[type], value));
}

void MethodParams::AddParam(WXParam type, jint value)
{
	AddParam(type, wxAndroid::Env->NewObject( wxAndroid::objClassReferences[type],
	wxAndroid::objInitMethodID[type], value));
}

void MethodParams::AddParam(WXParam type, jlong value)
{
	AddParam(type, wxAndroid::Env->NewObject( wxAndroid::objClassReferences[type],
	wxAndroid::objInitMethodID[type], value));
}

void MethodParams::AddParam(WXParam type, jfloat value)
{
	AddParam(type, wxAndroid::Env->NewObject( wxAndroid::objClassReferences[type],
	wxAndroid::objInitMethodID[type], value));
}

void MethodParams::AddParam(WXParam type, jdouble value)
{
	AddParam(type, wxAndroid::Env->NewObject( wxAndroid::objClassReferences[type],
	wxAndroid::objInitMethodID[type], value));
}

long long MethodParams::GetTypes()
{
	return m_params + m_count;
}

jobjectArray MethodParams::GetValues()
{
	return m_args;
}

void MethodParams::AddParam(WXParam type, jobject value)
{
	wxAndroid::Env->SetObjectArrayElement(m_args, m_count++, value);
	m_params += type;
	m_params <<= 4;
}

