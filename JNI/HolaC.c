#include <stdio.h>
#include <jni.h>
#include "HolaJNI.h"

JNIEXPORT void JNICALL Java_HolaJNI_diHola
  (JNIEnv *env, jobject obj){

	printf("Hola desde C");

}