/*  Nesneler için, new komutu ile nesne 
        boyutunda bellekten yer alınabilir. 
          Bellekte alınan bu isimsiz nesnenin 
             adresi bir göstergeye (pointer) atanıp, 
                 nesnenin üyelerine -> operatörü ile 
                                                erişilebilir.
*/

#include <iostream>
using namespace std;

class Point{
    int x;
    int y;
public:
    Point(int X=0, int Y=0) : x(X), y(Y) {}
    void print() const{
        cout << "(" << x << "," << y << ",";
    }
};

int main(){
    Point *p1 = new Point; // dinamik nesne
    Point *p2 = new Point(1,2); // dinamik nesne
    Point p3[4]; // otomatik dizi nesnesi
    Point *p4 = new Point[3]; // dinamik dizi nesnesi

    p1->print();
    p2->print();
    p3[2].print();
    p4[1].print();

    delete p1;
    delete p2;
    delete [] p4;
    return 0;
}