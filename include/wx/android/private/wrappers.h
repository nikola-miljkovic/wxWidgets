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

#define INIT_ACTIVITY()

#define INIT_OBJ(_class, _args, ...) \
	m_jclass = wxAndroid::Env->FindClass(_class); \
	m_jobject = wxAndroid::Env->NewGlobalRef(wxAndroid::Env->NewObject(m_class, \
		wxAndroid::Env->GetMethodID(m_class, "<init>", _args), __VA_ARGS__));

#define FIND_CLASS(_class) \
	m_jclass = wxAndroid::Env->FindClass(_class);

#define CALL_VOID(_class, _obj, _method, _args, ...) \
	wxAndroid::Env->CallVoidMethod(_obj, wxAndroid::Env->GetMethodID(_class, \
		_method, _args), __VA_ARGS__);

#define CALL_INT(_class, _obj, _method, _args, ...) \
	wxAndroid::Env->CallIntMethod(_obj, wxAndroid::Env->GetMethodID(_class, \
		_method, _args), __VA_ARGS__);

#define CALL_OBJ(_class, _obj, _method, _args, ...) \
	wxAndroid::Env->CallObjectMethod(_obj, wxAndroid::Env->GetMethodID(_class, \
		_method, _args), __VA_ARGS__);

#define CALL_BOOL(_class, _obj, _method, _args, ...) \
	wxAndroid::Env->CallBooleanMethod(_obj, wxAndroid::Env->GetMethodID(_class, \
		_method, _args), __VA_ARGS__);

#define CALL_BYTE(_class, _obj, _method, _args, ...) \
	wxAndroid::Env->CallByteMethod(_obj, wxAndroid::Env->GetMethodID(_class, \
		_method, _args), __VA_ARGS__);

#define CALL_CHAR(_class, _obj, _method, _args, ...) \
	wxAndroid::Env->CallCharMethod(_obj, wxAndroid::Env->GetMethodID(_class, \
		_method, _args), __VA_ARGS__);

#define CALL_SHORT(_class, _obj, _method, _args, ...) \
	wxAndroid::Env->CallShortMethod(_obj, wxAndroid::Env->GetMethodID(_class, \
		_method, _args), __VA_ARGS__);

#define CALL_LONG(_class, _obj, _method, _args, ...) \
	wxAndroid::Env->CallLongMethod(_obj, wxAndroid::Env->GetMethodID(_class, \
		_method, _args), __VA_ARGS__);

#define CALL_FLOAT(_class, _obj, _method, _args, ...) \
	wxAndroid::Env->CallFloatMethod(_obj, wxAndroid::Env->GetMethodID(_class, \
		_method, _args), __VA_ARGS__);

#define CALL_DOUBLE(_class, _obj, _method, _args, ...) \
	wxAndroid::Env->CallDoubleMethod(_obj, wxAndroid::Env->GetMethodID(_class, \
		_method, _args), __VA_ARGS__);

#endif // _WX_ANDROID_WRAPPERS_H_
