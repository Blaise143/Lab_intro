#include <iostream>
#include "HSLAPixel.h"
namespace cs221util{
HSLAPixel::HSLAPixel():s(0),l(1),a(1){  // first constructor
    }
    
HSLAPixel::HSLAPixel(double h1, double s1, double l1):
        h(h1),s(s1),l(l1) {            
        }
HSLAPixel::HSLAPixel(double h1, double s1, double l1, double a1):h(h1),s(s1),l(l1),a(a1){
       } //
} 

