#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


/////////////////  Resize and crop  //////////////////////

void main() {

    string path = "Resources/test.png";
    Mat img = imread(path);
    Mat imgResize, imgCrop;

    //cout << img.size() << endl;
    //resize(img, imgResize, Size(640,480));
    resize(img, imgResize, Size(),0.5,0.5);

    Rect roi(100, 100, 300, 250);
    imgCrop = img(roi);

    imshow("Image", img);
    imshow("Resized Image", imgResize);
    imshow("Cropped Image", imgCrop);

    waitKey(0);

}
