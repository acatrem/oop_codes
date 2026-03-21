#pragma once
#include "reptile.h"
using namespace std;

class Snake : public Reptile{
    public:
        Snake(string name, int age) : Reptile(name, age) {}

        void makeSound() override {
            cout << "tsssss" << endl;
        }

        void eat(Food food) override {
            cout << "yer" << food.getType() << endl;
        }

        void move() override {
            cout << "surunur" << endl;
        }
};
