// 7_.cpp : 定义控制台应用程序的入口点!
//

#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
	//读取本地的一张图片，并显示出来！
	cv::Mat src_color=imread("C:\\Users\\lenovo\\Desktop\\推文\\test1.png");
	std::vector<cv::Mat> channels;
	cv::split(src_color, channels);
	cv::Mat B = channels.at(0);
	cv::Mat G = channels.at(1);
	cv::Mat R = channels.at(2);
	cv::imshow("red", R); //展示三张图片对比
	cv::imshow("biue", G);
	cv::imshow("green", B);
	cv::imshow("original Mat", src_color);
	//等待用户按键
	waitKey(0);
	return 0;
}

