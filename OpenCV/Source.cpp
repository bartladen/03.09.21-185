#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <opencv2/imgcodecs.hpp>

using namespace cv;
using namespace std;
int main(int argc, char** arvg)
{
    //setlocale(LC_ALL, "Russian");
    //char filename[80];//road.jpg
    //Mat img;
    //cout << "������� ��� �����, � ������� ������ ������ ���������, � ������� Enter" << endl;
    //cin.getline(filename, 80);
    //cout << "�������� ����";
    //cout << filename << endl;//C:/Users/�������������/Downloads/3448079982.jpg
    Mat img = imread("C:/Users/�������������/Downloads/3448079982.jpg", 1);
    //char* sourse_window = "�������� �����������";//
    //namedWindow("�������� �����������", WINDOW_AUTOSIZE);
    //imshow("�������� �����������", img);
    //Mat canny_output;
    imshow("Load", img);
    //Mat src_gray;
   // Mat _img;
    //cvtColor(img, src_gray, COLOR_RGB2GRAY);
    //blur(src_gray, src_gray, Size(3, 3));
    //double otsu_thresh_val = threshold(src_gray,_img, 0, 255, THRESH_BINARY|THRESH_OTSU);
    //double hight_trhesh_val = otsu_thresh_val, lower_thresh_val = otsu_thresh_val * 0.5;
    //cout << otsu_thresh_val;
    //Canny(src_gray, canny_output, lower_thresh_val, hight_trhesh_val, 3);
    //namedWindow("����� �����������", WINDOW_AUTOSIZE);
    //imshow("����� �����������", canny_output);
    //imwrite("canny_output.jpg", canny_output);

    waitKey(0);
    system("pause");
    return 0;
}