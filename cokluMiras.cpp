#include <iostream>
using namespace std;

class Base1{
public:
    void f1(){}

};

class Base2{
public:
    void f2(){}
};

class Base3{
public:
    void f3(){}
};

class Derived : public Base1, public Base2, public Base3{
public:
    void f2(){}
    void f3(int) {}
};

int main(){
    Derived a;
    a.f1(); // Base1::f1
    a.f2(); // Overrides Base2
    a.f3(); // Error: function are not overloaded in inheritance
    a.Base3::f3(); // Base3::f3
    return 0;
}