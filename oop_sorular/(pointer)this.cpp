#include <iostream>
using namespace std;
class Sayi {
    int x;
public:
    Sayi(int val) : x(val) {}
    Sayi& ekle(int val) {
        x += val;
        return *this;
    }
    void yazdir() { cout << x; }
};

int main() {
    Sayi s(10);
    s.ekle(5).ekle(5);
    s.yazdir();
}