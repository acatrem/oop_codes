#include "ThreeDShape.h"
#include <iostream>
#include <string>
using namespace std;

ThreeDShape::ThreeDShape(string name) : Shape(name) {}

double ThreeDShape::volume(){
    return 0.0;
}

double ThreeDShape::surfaceArea(){
    return 0.0;
}