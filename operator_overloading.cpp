#include <iostream>
using namespace std;

struct Complex{
    double Re;
    double Im;
};

Complex operator+(const Complex& a, const Complex& b){
    Complex sum;
    sum.Re = a.Re + b.Re;
    sum.Im = a.Im + b.Im;
    return sum;
}

int main(){
    Complex c1{1.0, 2.0};  // 1 + 2i
    Complex c2{3.0, 4.0};  // 3 + 4i

    Complex sum = c1 + c2; // 4 + 6i

    cout << "c1: " << c1.Re << " + " << c1.Im << "i" << endl;
    cout << "c2: " << c2.Re << " + " << c2.Im << "i" << endl;
    cout << "Sum: " << sum.Re << " + " << sum.Im << "i" << endl;

    return 0;
}