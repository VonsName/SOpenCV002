#include <opencv2/opencv.hpp>
#include <math.h>
using namespace cv;

int main(int argc,char *argv[])
{
	Mat src, dst;

	src=imread("C:\\Users\\Administrator\\Desktop\\1.jpg");

	if (!src.data)
	{
		printf("ªÒ»°¥ÌŒÛ\n");
		return -1;
	}

	namedWindow("inputIm", CV_WINDOW_AUTOSIZE);
	imshow("inputIm",src);
	waitKey(0);
	return 0;
}