#pragma once
#include "ThreeDShape.h"

class Cube : public ThreeDShape{
    private:
        double edge;
        
    public:
        Cube(double edge = 0.0);
        double getEdge();
        void setEdge(double edge);
        double volume() override;
        double surfaceArea() override;
};
