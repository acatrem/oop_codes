#pragma once
#include "animal.h"
using namespace std;

class Reptile : public Animal{
    public:
        Reptile(string name, int age) : Animal(name, age) {}
};