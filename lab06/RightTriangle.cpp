#include "RightTriangle.h"
#include <iostream>
#include <cmath>
using namespace std;

RightTriangle::RightTriangle(double base, double height) : TwoDShape("Right Triangle") {
    this->base = base;
    this->height = height;
}

double RightTriangle::getBase(){
    return base;
}

void RightTriangle::setBase(double base){
    this->base = base;
}

double RightTriangle::getHeight(){
    return height;
}

void RightTriangle::setHeight(double height){
    this->height = height;
}

double RightTriangle::area(){
    return 0.5 * base * height;
}

double RightTriangle::perimeter(){
    return base + height + sqrt(base * base + height * height);
}




