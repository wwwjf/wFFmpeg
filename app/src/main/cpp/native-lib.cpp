#include <jni.h>
#include <string>

#include <android/log.h>
#define LOGW(...)  __android_log_print(ANDROID_LOG_WARN,"test_ffmpeg",__VA_ARGS__)

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
}



extern "C" JNIEXPORT jstring JNICALL
Java_com_wengjianfeng_wffmpeg_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    hello += avcodec_configuration();
    hello += avformat_configuration();
    //初始化解封装
    /*av_register_all();
    //打开文件
    AVFormatContext *ic = NULL;
    char path[] = "/sdcard/1552998953123.wav";
    int re = avformat_open_input(&ic,path,0,0);
    if (re){
        LOGW("avformat 打开成功 %s",path);
        avformat_close_input(&ic);
    } else{
        LOGW("avformat 打开失败 %s",av_err2str(re));
    }*/

    return env->NewStringUTF(hello.c_str());
}
//extern "C"
//JNIEXPORT jboolean JNICALL
//Java_com_wengjianfeng_wffmpeg_MainActivity_Open(JNIEnv *env, jobject instance, jstring url_,
//                                                jobject handle) {
//    const char *url = env->GetStringUTFChars(url_, 0);
//
//     TODO
    /*FILE *fp = fopen(url, "rb");
    if (!fp) {
        LOGW("%s open failed!",url);
    } else {
        LOGW("%s open success!",url);
        fclose(fp);
    }*/

//    env->ReleaseStringUTFChars(url_, url);
//}