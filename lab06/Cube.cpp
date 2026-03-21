#include "Cube.h"
#include <iostream>
using namespace std;

Cube::Cube(double edge) : ThreeDShape("Cube"){
    this->edge = edge;
}

double Cube::getEdge(){
    return edge;
}

void Cube::setEdge(double edge){
    this->edge = edge;
}

double Cube::volume(){
    return edge * edge * edge;
}

double Cube::surfaceArea(){
    return 6 * edge * edge;
}