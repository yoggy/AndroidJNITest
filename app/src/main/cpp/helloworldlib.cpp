#include <jni.h>
#include <string>
#include "test.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_net_sabamiso_android_androidjnitest_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject this_object) {

    Test test;
    return env->NewStringUTF(test.str().c_str());
}
