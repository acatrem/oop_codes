#pragma once
#include "animal.h"
using namespace std;

class Mammal : public Animal{
    public:
        Mammal(string name, int age) : Animal(name, age) {}
};