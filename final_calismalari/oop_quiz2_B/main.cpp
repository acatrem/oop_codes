#include "klima.h"
#include <iostream>
using namespace std;

int main(){
    Klima klima;
    klima.goster();
    klima.ac().ayar(25);
    klima.goster();
    return 0;
}

// derlemek icin: g++ -std=c++17 main.cpp klima.cpp -o main

