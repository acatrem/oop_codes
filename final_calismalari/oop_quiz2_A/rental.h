#pragma once
#include <iostream>
using namespace std;

class Rental{
    private:
        double dailyPrice;
        int day;
    public:
        Rental(double daily, int d);
        virtual ~Rental();
        double getRentalPrice();
        virtual void print();
};