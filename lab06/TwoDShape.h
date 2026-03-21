#pragma once
#include "Shape.h"
#include <string>
using namespace std;

class TwoDShape : public Shape{
    public:
        TwoDShape(string name);
        virtual double area();
        virtual double perimeter();
};
