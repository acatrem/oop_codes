#include "Shape.h"
#include <iostream>
#include <string>
using namespace std;

Shape::Shape(string name){
    this->name = name;
}

string Shape::getName(){
    return name;
}

void Shape::setName(string shapeName){
    name = shapeName;
}