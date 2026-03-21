#pragma once
#include "ThreeDShape.h"
using namespace std;

class RectangularPrism : public ThreeDShape{
    private:
        double width;
        double height;
        double depth;

    public:
        RectangularPrism(double width = 0.0, double height = 0.0, double depth = 0.0);
        double getWidth();
        void setWidth(double width);
        double getHeight();
        void setHeight(double height);
        double getDepth();
        void setDepth(double depth);
        double volume() override;
        double surfaceArea() override;
};
