#include <iostream>
#include <cstdint>
#include <stdio.h>
#include <opencv2/opencv.hpp>


int main(int argc, char **argv) {
  std::string filename = "data/test.jpg";   

  cv::Mat image;
  image = imread(filename, cv::IMREAD_GRAYSCALE);

  if (!image.data) {
    printf("Could not open: %s", filename);
  }

  cv::namedWindow("test", WINDOW_AUTOSIZE);
  cv::imshow("test", image);
  cv::waitKey(0);
  
  return 0;
}
