#include <jni.h>
#include <string>
#include "librealsense2/rs.hpp"

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_intelrealsensenative_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());

    rs2::pipeline p;

    p.start();
}
