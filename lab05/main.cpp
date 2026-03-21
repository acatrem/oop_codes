#include <iostream>
#include "time.h"

using namespace std;

int main() {
    // Kurucu ve normalize testi
    Time a(10, 75);  // 10:75 -> 11:15 olması beklenir
    Time b(23, 120); // 23:120 -> 01:00 olması beklenir

    cout << "a (10,75)  = " << a << endl;
    cout << "b (23,120) = " << b << endl;

    // Time + int testi
    Time t1(10, 50);
    cout << "\nBaslangic t1 = " << t1 << endl;

    Time t2 = t1 + 35;    // 10:50 + 35 dk
    cout << "t2 = t1 + 35 dk  -> " << t2 << endl;

    Time t3 = t1 + 200;   // 10:50 + 200 dk
    cout << "t3 = t1 + 200 dk -> " << t3 << endl;

    // int + Time testi (friend operator+)
    Time t4 = 50 + t1;
    cout << "t4 = 50 + t1     -> " << t4 << endl;

    // prefix ++ testi
    cout << "\nPrefix ++ testi" << endl;
    cout << "t1 = " << t1 << endl;
    cout << "++t1 = " << ++t1 << endl;  // burada t1 ileri gider
    cout << "t1 (sonra) = " << t1 << endl;

    // operator- (dakika farki) testi
    cout << "\nFark (operator-) testi" << endl;
    Time x(10, 50);
    Time y(12, 10);
    int diff1 = y - x; // dakikadan fark
    cout << "x = " << x << ", y = " << y << endl;
    cout << "y - x = " << diff1 << " dakika" << endl;

    Time z(8, 30);
    int diff2 = x - z;
    cout << "z = " << z << ", x = " << x << endl;
    cout << "x - z = " << diff2 << " dakika" << endl;

    // operator< ve operator== testleri
    cout << "\nKarsilastirma testleri" << endl;
    Time c(9, 0);
    Time d(9, 30);
    Time e(9, 30);

    cout << "c = " << c << ", d = " << d << ", e = " << e << endl;

    cout << "c < d ? " << boolalpha << (c < d) << endl;
    cout << "d < c ? " << boolalpha << (d < c) << endl;

    cout << "d == e ? " << boolalpha << (d == e) << endl;
    cout << "c == d ? " << boolalpha << (c == d) << endl;

    return 0;
}
