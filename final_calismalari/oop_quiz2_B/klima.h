#pragma once
#include <iostream>
using namespace std;

class Klima{
    private:
        bool durum;
        int sicaklik;
    public:
        Klima(bool d = 0, int s = 15);
        Klima& ac();
        void operator+=(int artis);
        void ayar(int i);
        void goster();
};