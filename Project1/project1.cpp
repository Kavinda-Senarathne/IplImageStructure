#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <iostream>
#include <stdio.h>
#include <opencv\cv.h>
#include <opencv\cxcore.h>
#include <opencv\highgui.h>

using namespace cv;
using namespace std;

int main(int argc, char* argv[])
{
	IplImage* img;
	img = cvLoadImage("dog.jpg");
	if (!img)
		printf("Could not load image file: %s\n", "dog.jpg");
	cvNamedWindow("Image");
	cvShowImage("Image", img);
	cvWaitKey(0);
	cvDestroyWindow("Image");
	cvReleaseImage(&img);
	return 0;
}