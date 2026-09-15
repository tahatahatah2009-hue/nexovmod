#include <jni.h>
#include <unistd.h>
#include <android/log.h>

#define LOG_TAG "NexoMod"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)

void* MainThread(void*) {
    LOGD("NexoMod Loaded Successfully from Phone!");
    return nullptr;
}

__attribute__((constructor)) void _init() {
    pthread_t pt;
    pthread_create(&pt, NULL, MainThread, NULL);
}

