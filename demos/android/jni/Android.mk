LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE 	:= libwxAndroid
LOCAL_SRC_FILES := $(LOCAL_PATH)/../../../wx-android/lib/libwx_androidu-3.1-arm-linux-androideabi.a

include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)

LOCAL_MODULE    := wxAPP

LOCAL_SRC_FILES := \
main.cpp  
LOCAL_LDLIBS    := -llog
LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../../include
LOCAL_CFLAGS    := -fpermissive -fexceptions -D__ANDROID__ -D__WXANDROID__ -D_wxUSE_ANY
LOCAL_STATIC_LIBRARIES := libwxAndroid

include $(BUILD_SHARED_LIBRARY)
