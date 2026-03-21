#include "Square.h"
#include <iostream>
using namespace std;

Square::Square(double side) : TwoDShape("Square") {
    this->side = side;
}

double Square::getSide(){
    return side;
}

void Square::setSide(double side){
    this->side = side;
}

double Square::area(){
    return side * side;
}

double Square::perimeter(){
    return 4 * side;
}