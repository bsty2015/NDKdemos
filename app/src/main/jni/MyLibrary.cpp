//
// Created by zhaolu on 12/5/15.
//
#include "com_bsty_apps_ndkdemos_MyNDK.h"

JNIEXPORT jstring JNICALL Java_com_bsty_apps_ndkdemos_MyNDK_getMyString(JNIEnv *env, jobject) {
    return env->NewStringUTF("This is MyLibrary!!!!!");
}

