
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := hello-jni
#指定要编译的源文件
LOCAL_SRC_FILES := hello.c

include $(BUILD_SHARED_LIBRARY)
