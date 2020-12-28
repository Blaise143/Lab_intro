#include <iostream>
#pragma once
using namespace std;
namespace cs221util {
class HSLAPixel {
    public : //
    double h; //hue
    double s; // saturation
    double l; // luminance
    double a; // alpha
    HSLAPixel();
    HSLAPixel(double h1,double s1,double l1);
    HSLAPixel(double h1,double s1,double l1,double a1);
    };
}//
