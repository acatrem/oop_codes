#pragma once
#include "food.h"
#include <string>
#include <iostream>
using namespace std;

class Animal{
    private:
        string name;
        int age;
    
    public:
        Animal(string name, int age){
            this->name = name;
            this->age = age;
        };

        virtual ~Animal() {}
        virtual void makeSound() = 0;
        virtual void eat(Food food) = 0;
        virtual void move() = 0;
        virtual void sleep(){
            cout << name << " is sleeping." << endl;
        }
};