#include <iostream>
using namespace std;

class Test {
private:
    
public:
    static int sayi;
    Test() { sayi++; }
};

int Test::sayi = 0;

int main() {
    Test t1;
    Test t2;
    Test t3;
    cout << Test::sayi;
    return 0;
}