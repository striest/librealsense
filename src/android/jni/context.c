#include <jni.h>
#include "../../../include/librealsense2/rs.h"

JNIEXPORT jlong JNICALL
Java_com_intel_realsense_librealsense_RsContext_nCreate(JNIEnv *env, jclass type) {
    rs2_error* e = NULL;
    rs2_context* handle = rs2_create_context(RS2_API_VERSION, &e);
    return handle;
}

JNIEXPORT void JNICALL
Java_com_intel_realsense_librealsense_RsContext_nDelete(JNIEnv *env, jclass type, jlong handle) {
    rs2_delete_context(handle);
}