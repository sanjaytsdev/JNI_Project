#include <jni.h>
#include "MyJNI.h" 

JNIEXPORT jint JNICALL Java_MyJNI_add(JNIEnv *env, jobject obj, jint a, jint b) {
    return a + b; 
}

JNIEXPORT jint JNICALL Java_MyJNI_sub(JNIEnv *env, jobject obj, jint a, jint b) {
    return a - b; 
}

JNIEXPORT jint JNICALL Java_MyJNI_mul(JNIEnv *env, jobject obj, jint a, jint b) {
    return a * b; 
}

JNIEXPORT jdouble JNICALL Java_MyJNI_div(JNIEnv *env, jobject obj, jint a, jint b) {
    return b != 0 ? (double)a/b : 0; 
}


