#include<stdio.h>
#include<stdlib.h>
#include <jni.h>
/**
   1.实现本地方法格式:先写返回值类型 + Java+ 要实现的本地方法所在的完整包名+类名+方法名
   2.方法名写好后 必须要加上2个参数

   3.  JNINativeInterface** env   struct JNINativeInterface 总结env是JNINativeInterface二级指针
     int i = 10;
     int* p = &i;
     int** q = &p;
     **q
     (*NewStringUTF)(JNIEnv*, const char*);
**/


jstring Java_com_demo_zxl_user_jni_MainActivity_helloFromC(JNIEnv* env,jobject thiz ){
      // return  (**env).NewStringUTF(env,"hello java");
       return (*env)->NewStringUTF(env,"hello java");

}
