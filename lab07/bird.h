#pragma once
#include "animal.h"
using namespace std;

class Bird : public Animal{
    public:
        Bird(string name, int age) : Animal(name, age) {}
};