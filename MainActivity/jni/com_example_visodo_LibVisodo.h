/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_visodo_LibVisodo */

#ifndef _Included_com_example_visodo_LibVisodo
#define _Included_com_example_visodo_LibVisodo
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_visodo_LibVisodo
 * Method:    start
 * Signature: ()V
 */
JNIEXPORT jdoubleArray JNICALL Java_com_example_visodo_LibVisodo_start
  (JNIEnv * , jclass,jlong addrRgba,jlong afterPic,jint i ,jdouble xx,jdouble yy,jdouble zz ,jboolean isFromCamera);

JNIEXPORT jstring JNICALL Java_com_example_visodo_LibVisodo_init
  (JNIEnv * , jclass,jlong firstPic,jlong secondPic , jboolean isFromCamera);

#ifdef __cplusplus
}
#endif
#endif
