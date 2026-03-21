#pragma once
#include <iostream>
#include "Oda.h"
#include <vector>
using namespace std;

class Ev{
    private:
        vector<Oda> odalar;

    public:
        Ev(Oda);
        void odaEkle(Oda);
        int bilgi();
        Oda getOda(int);
        void odaSil();

};