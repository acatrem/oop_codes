#pragma once
#include "TwoDShape.h"
using namespace std;

class Square : public TwoDShape{
    private:
        double side;
    
    public:
        Square(double side = 0.0);
        double getSide();
        void setSide(double side);
        double area() override;
        double perimeter() override;
};