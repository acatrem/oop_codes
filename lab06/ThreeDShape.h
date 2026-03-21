#pragma once
#include "Shape.h"
#include <string>
using namespace std;

class ThreeDShape : public Shape{
    public:
        ThreeDShape(string name);
        virtual double volume();
        virtual double surfaceArea();
};
