#pragma once
#include "TwoDShape.h"
using namespace std;

class RightTriangle : public TwoDShape{
    private:
        double base;
        double height;
    
    public:
        RightTriangle(double base = 0.0, double height = 0.0);
        double getBase();
        void setBase(double base);
        double getHeight();
        void setHeight(double height);
        double area() override;
        double perimeter() override;
};
