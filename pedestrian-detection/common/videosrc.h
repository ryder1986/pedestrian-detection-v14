#ifndef VIDEOSRC_H
#define VIDEOSRC_H
#include <QtCore>
#include <thread>
#include "tool1.h"

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/video/video.hpp>
#include <opencv2/ml/ml.hpp>
#include <opencv2/objdetect/objdetect.hpp>

using namespace std;
using namespace cv;

class  VideoSrc{
    typedef struct thread_data{

    }thread_data_t;

    thread_data_t d;
    thread *p_video_thread;
public:
    VideoSrc()
    {
        p_video_thread=new thread(fun,&d);
    }
    ~VideoSrc()
    {
        delete p_video_thread;
    }
    Mat *fetch_frame()
    {

    }

private:
    static  void fun(thread_data_t *data){
            while(1){
                prt(info,"runing thread");
                this_thread::sleep_for(chrono::seconds(1));
            }
    }

//    VideoSrc(QString path):p_cap(NULL)
//    {
//        memset(url,0,Tools::PATH_LENGTH);
//        strcpy(url,path.toStdString().data());
//        p_cap= cvCreateFileCapture(url);  //create video source
//        width=cvGetCaptureProperty(p_cap,CV_CAP_PROP_FRAME_WIDTH);
//        height=cvGetCaptureProperty(p_cap,CV_CAP_PROP_FRAME_HEIGHT);
//        if(p_cap==NULL){
//            prt(info,"video src start  %s err  ",url);
//            video_connected_flag=false;
//        }
//        else {
//            prt(info,"video src  start %s ok  ",url);
//        }
//    }
//    ~VideoSrc()
//    {
//        cvReleaseCapture(&p_cap);
//        p_cap=NULL;
//    }
//    Mat *get_frame()
//    {
//        int err=0;
//        if(p_cap==NULL){
//            video_connected_flag=false;
//            err=1;
//        }
//        IplImage *ret_img;
//        ret_img=cvQueryFrame(p_cap);
//        Mat(ret_img).copyTo(mat_rst);
//        if(ret_img==NULL){
//            err=1;
//        }else{
//        }
//        if(err)
//            return NULL;
//        else
//            return &mat_rst;

//    }
//    char *get_url(){
//        return url;
//    }

//private:
//    CvCapture *p_cap;
//    char url[Tools::PATH_LENGTH];
//    int width;
//    int height;
//    Mat mat_rst;
};

#endif // VIDEOSRC_H
