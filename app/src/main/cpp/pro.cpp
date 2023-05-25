#include <jni.h>
#include <android/log.h>

#define APPNAME "CPP.FILE" // used for logging

extern "C" {
JNIEXPORT jstring /* JNICALL  this code for whatever reason isn't needed but it complains if I don't have it */
    Java_com_simplemobiletools_notes_pro_activities_MainActivity_00024Companion_getHelloWorldString(JNIEnv *env, jobject thiz) {
    jstring result = env->NewStringUTF("CPP CALL RESULT");
    __android_log_print(ANDROID_LOG_VERBOSE, APPNAME, "CPP FILE LOG TEST");
    return result;
    }
}
