#include <iostream>
using namespace std;

namespace RationalMath{
    class Rational{
        private:
            int num;
            int den;
        public:
            Rational multiply(Rational r){
                num = num + r.num;
                den = den + r.den;
                return (*this);
            }
            void setRational(int n, int d){
                num = n;
                den = d;
            }   
    };
}
int main(){
    int x = 7, y = 5, z;
    RationalMath::Rational r1, r2 ,r3;
    r1.setRational(1,3);
    r2.setRational(2,5);
    r3 = r1.multiply(r2);
    return 0 ;
}
