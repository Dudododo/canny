#include <iostream>
#include <opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	cv::Mat srcMat = imread("1.jpg");
	cv::Mat dstMat,dstMat1;
	cv::Mat dx, dy;

	cv::Canny(srcMat, dstMat, 20, 60);

	cv::Sobel(srcMat, dx, CV_16SC1, 1, 0, 3, 1, 0, BORDER_DEFAULT);
	cv::Sobel(srcMat, dy, CV_16SC1, 0, 1, 3, 1, 0, BORDER_DEFAULT);
	cv::Canny(dx, dy, dstMat1, 20, 60);

	cv::imshow("srcMat", srcMat);
	cv::imshow("dstMat", dstMat);
	cv::imshow("dstMat1", dstMat1);

	waitKey(0);
}

