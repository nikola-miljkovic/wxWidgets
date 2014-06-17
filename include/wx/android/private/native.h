/////////////////////////////////////////////////////////////////////////////
// Name:        wx/android/private/native.h
// Purpose:	java/android native function declarations
// Author:      Nikola Miljkovic
// Created:
// Copyright:   (c) 2014 wxWidgets
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_ANDROID_NATIVE_H_
#define _WX_ANDROID_NATIVE_H_

#include <jni.h>
#include <android/log.h>

#include <stack>

extern "C" {

#if defined(__arm__)
	#if defined(__ARM_ARCH_7A__)
		#if defined(__ARM_NEON__)
			#define ABI "armeabi-v7a/NEON"
		#else
		  	  #define ABI "armeabi-v7a"
		#endif
	#else
	   	#define ABI "armeabi"
	#endif
#elif defined(__i386__)
	#define ABI "x86"
#elif defined(__mips__)
	#define ABI "mips"
#else
	#define ABI "unknown"
#endif

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "wxWidgets", __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, "wxWidgets", __VA_ARGS__))

// JNI_OnLoad(...) returns this, needed for JAVA's LoadLibrary()
extern WXDLLIMPEXP_CORE jint
wxAndroidEntryStart(JavaVM* vm, void* reserved);

// private native int org.wxwidgets.MainActivity.wxStart()
JNIEXPORT jint JNICALL
Java_org_wxwidgets_MainActivity_wxStart( JNIEnv* env, jobject thiz);

// private native int org.wxwidgets.MainActivity.wxEnd()
JNIEXPORT jint JNICALL
Java_org_wxwidgets_MainActivity_wxEnd( JNIEnv* env, jobject thiz);

// private native int org.wxwidgets.FrameActivity.wxRegisterFrame()
JNIEXPORT jint JNICALL
Java_org_wxwidgets_FrameActivity_wxRegisterFrame(JNIEnv* env, jobject thiz);

// private native int org.wxwidgets.FrameActivity.wxUnregisterFrame()
JNIEXPORT jint JNICALL
Java_org_wxwidgets_FrameActivity_wxUnregisterFrame(JNIEnv* env, jobject thiz);

}

#endif // _WX_ANDROID_NATIVE_H_
