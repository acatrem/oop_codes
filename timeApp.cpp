#include <iostream>
#include "time.cpp"
using namespace std;

int main(){
    Time wakeUp(6, 45, 0);
    Time const noon(12, 0, 0);

    //object member function
    wakeUp.setHour(7); // non-const object can call non-const member function
     // noon.setHour(12); // const object cannot call non-const member function
    wakeUp.getHour()   ; // non-const object can call non-const member function
    return 0;
}