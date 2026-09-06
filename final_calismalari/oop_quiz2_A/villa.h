#include "rental.h"
#include <iostream>
using namespace std;

class Villa : public Rental{
    public:
        Villa(double daily, int d);
        ~Villa();
        void print();
};