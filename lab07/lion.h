#pragma once
#include "mammal.h"
using namespace std;

class Lion : public Mammal{
    public:
        Lion(string name, int age) : Mammal(name, age) {}

        void makeSound() override {
            cout << "roaaaar" << endl;
        }

        void eat(Food food) override {
            cout << "yer " << food.getType() << endl;
        }

        void move() override {
            cout << "kosar" << endl;
        }
};