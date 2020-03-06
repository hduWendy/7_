// 7_.cpp : �������̨Ӧ�ó������ڵ�!
//

#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
	//��ȡ���ص�һ��ͼƬ������ʾ������
	cv::Mat src_color=imread("C:\\Users\\lenovo\\Desktop\\����\\test1.png");
	std::vector<cv::Mat> channels;
	cv::split(src_color, channels);
	cv::Mat B = channels.at(0);
	cv::Mat G = channels.at(1);
	cv::Mat R = channels.at(2);
	cv::imshow("red", R); //չʾ����ͼƬ�Ա�
	cv::imshow("biue", G);
	cv::imshow("green", B);
	cv::imshow("original Mat", src_color);
	//�ȴ��û�����
	waitKey(0);
	return 0;
}

