// Class'ın tüm nesnelerin ortak kullandıkları üyelere "static" sınıf üyeleri denir.
// static üyeler, bir kere istenilen değerle başlatılabilir.

#include <iostream>
using namespace std;

class Point{
    int x;
    int y;
    static int index;
public:
    Point(int X=0, int Y=0, int i=0) : x(X), y(Y) {} // index'i başlatamıyoruz çünkü static üye
    void print() const{
        cout << "(" << x << "," << y << "," << index << ")";
    }
    static void setIndex(int i){
        index = i;
    }
};
int Point::index = 0; // static üye tanımlaması ve başlatılması

int main(){
    Point p1(1,2);
    Point p2(3,4);
    p1.print();
    p2.print();
    cout << endl;

    Point::setIndex(5); // static üye fonksiyon çağrısı
    p1.print();
    p2.print();
    cout << endl;

    p1.setIndex(10); // static üye fonksiyon çağrısı
    p1.print();

    return 0;
}