

#include "cam_wrapper.hpp"
#include <iostream>

VideoWrapper::VideoWrapper(const std::string &filename)
{
    video.open(filename);
}

VideoWrapper::~VideoWrapper() { printf("Close Camera Success!\n"); }

bool VideoWrapper::init()
{
    return video.isOpened();
}

bool VideoWrapper::close() { return false; };

bool VideoWrapper::read(cv::Mat &src)
{
    return video.read(src);
}

bool VideoWrapper::setBrightness(int brightness)
{
    return true;
}

int VideoWrapper::getFps()
{
    return video.get(5);
}
