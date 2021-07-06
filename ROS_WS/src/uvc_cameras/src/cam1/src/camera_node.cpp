#include <nodelet/loader.h>
#include <ros/ros.h>

#include "uvc_camera/camera.h"

int main(int argc, char **argv) {
    ros::init(argc, argv, "cam1");
    uvc_camera::Camera camera(ros::NodeHandle(), ros::NodeHandle("~"));
    ros::spin();
    return 0;
}