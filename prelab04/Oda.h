#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Cihaz.h"
using namespace std;

class Oda{
    private:
        string tip;
        vector<Cihaz> cihazlar;
    public:
        Oda(string tip);
        void cihazEkle(Cihaz);
        string bilgi();
        Cihaz getCihaz(int);
};
