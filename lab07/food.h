#pragma once
#include <string>
using namespace std;

class Food{
    private:
        string type;
    public:
        Food(string type){
            this->type = type;
        };
        string getType(){
            return type;
        };
};