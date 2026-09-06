#include <iostream>
using namespace std;

class Base {
public:
    virtual void f() { cout << "Base"; }
};

class Derived : public Base {
public:
    void f(int x) { cout << "Derived"; } // Parametre farklı!
};

int main() {
    Derived d;
    // d.f(); // Bu satır hata verir miydi?
    d.f(10);
    return 0;
}