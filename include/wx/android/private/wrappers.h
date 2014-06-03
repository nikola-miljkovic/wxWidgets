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

#define INIT_OBJ(_class, _args, ...) \
	m_class = env->FindClass(_class); \
	m_object = env->NewGlobalRef(env->NewObject(m_class, \
		env->GetMethodID(m_class, "<init>", _args), __VA_ARGS__));

#define CALL_VOID(_class, _obj, _method, _args, ...) \
	env->CallVoidMethod(_obj, env->GetMethodID(_class, \
		_method, _method, __VA_ARGS__));

#define CALL_INT(_class, _obj, _method, _args, ...) \
	env->CallIntMethod(_obj, env->GetMethodID(_class, \
		_method, _method, __VA_ARGS__));

#define CALL_OBJ(_class, _obj, _method, _args, ...) \
	env->CallObjectMethod(_obj, env->GetMethodID(_class, \
		_method, _method, __VA_ARGS__));

#define CALL_BOOL(_class, _obj, _method, _args, ...) \
	env->CallBooleanMethod(_obj, env->GetMethodID(_class, \
		_method, _method, __VA_ARGS__));

#define CALL_BYTE(_class, _obj, _method, _args, ...) \
	env->CallByteMethod(_obj, env->GetMethodID(_class, \
		_method, _method, __VA_ARGS__));

#define CALL_CHAR(_class, _obj, _method, _args, ...) \
	env->CallCharMethod(_obj, env->GetMethodID(_class, \
		_method, _method, __VA_ARGS__));

#define CALL_SHORT(_class, _obj, _method, _args, ...) \
	env->CallShortMethod(_obj, env->GetMethodID(_class, \
		_method, _method, __VA_ARGS__));

#define CALL_LONG(_class, _obj, _method, _args, ...) \
	env->CallLongMethod(_obj, env->GetMethodID(_class, \
		_method, _method, __VA_ARGS__));

#define CALL_FLOAT(_class, _obj, _method, _args, ...) \
	env->CallFloatMethod(_obj, env->GetMethodID(_class, \
		_method, _method, __VA_ARGS__));

#define CALL_DOUBLE(_class, _obj, _method, _args, ...) \
	env->CallDoubleMethod(_obj, env->GetMethodID(_class, \
		_method, _method, __VA_ARGS__));

#endif // _WX_ANDROID_WRAPPERS_H_
