#include <iostream>
using namespace std;

class Complex{
    private:
        double Re;
        double Im;

    public:
        Complex(){Re=0, Im=0;}
        Complex(double re, double im){
            Re = re;
            Im = im;
        }
        Complex operator+(const Complex& rhs) const{
            Complex sum;
            sum.Re = Re + rhs.Re;
            sum.Im = Im + rhs.Im;
            return sum;
        }
        Complex operator-(const Complex& rhs) const{
            Complex diff;
            diff.Re = Re - rhs.Re;
            diff.Im = Im - rhs.Im;
            return diff;
        }
        double getRe() const { return Re; }
        double getIm() const { return Im; }
        
};

int main() {
    Complex c1(1.0, 2.0);  // 1 + 2i
    Complex c2(3.0, 4.0);  // 3 + 4i
    
    Complex sum = c1 + c2;   // 4 + 6i
    Complex diff = c1 - c2;  // -2 + -2i
    
    cout << "c1: " << c1.getRe() << " + " << c1.getIm() << "i" << endl;
    cout << "c2: " << c2.getRe() << " + " << c2.getIm() << "i" << endl;
    cout << "Sum: " << sum.getRe() << " + " << sum.getIm() << "i" << endl;
    cout << "Diff: " << diff.getRe() << " + " << diff.getIm() << "i" << endl;
    
    return 0;
}