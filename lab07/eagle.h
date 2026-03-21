#pragma once
#include "bird.h"
using namespace std;

class Eagle : public Bird{
    public:
        Eagle(string name, int age) : Bird(name, age) {}

        void makeSound() override {
            cout << "faaah" << endl;
        }

        void eat(Food food) override {
            cout << "yer " << food.getType() << endl;
        }

        void move() override {
            cout << "ucar" << endl;
        }
};