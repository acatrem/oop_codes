#pragma once
#include <string>
using namespace std;

class Shape{
    private:
        string name;

    public:
        Shape(string name);
        string getName();
        void setName(string shapeName);
};