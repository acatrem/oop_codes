#include <iostream>
#include <string>
using namespace std;

class A{
    int a;
public:
    A(int q=0){
        a = q;
    }
    bool operator==(const A &b) const{
        if(a == b.a) return true;
        else return false;
    }
};

template <typename T>
bool compare(const T &x, const T &y){
    return x == y;
}

int main(){
    A objA(1), objB(2);
    int a = 2, b = 2;
    compare(objA, objB);
    cout << "Comparing two objects of class A: ";
    compare(objA, objB) ? cout << "objA and objB are equal" << endl : cout << "objA and objB are not equal" << endl;
    cout << "Comparing two integers: ";
    compare(a,b) ? cout << "a and b are equal" << endl : cout << "a and b are not equal" << endl;
    objA == objB ? cout << "objA and objB are equal" << endl : cout << "objA and objB are not equal" << endl;
    return 0;
}