#include "rental.h"
#include <iostream>
using namespace std;

class Apartment : public Rental {
    private:
        int floor;
    public:
        Apartment(int flo, double daily, int d);
        ~Apartment();
        void print() override;
};