#include "RectangularPrism.h"
#include <iostream>
using namespace std;

RectangularPrism::RectangularPrism(double width, double height, double depth) : ThreeDShape("Rectangular Prism"){
    this->width = width;
    this->height = height;
    this->depth = depth;
}

double RectangularPrism::getWidth(){
    return width;
}

void RectangularPrism::setWidth(double width){
    this->width = width;
}

double RectangularPrism::getHeight(){
    return height;
}

void RectangularPrism::setHeight(double height){
    this->height = height;
}

double RectangularPrism::getDepth(){
    return depth;
}

void RectangularPrism::setDepth(double depth){
    this->depth = depth;
}

double RectangularPrism::volume(){
    return width * height * depth;
}

double RectangularPrism::surfaceArea(){
    return 2 * (width * height + width * depth + height * depth);
}

