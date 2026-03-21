#include <cmath> // RightTriangle icin gerekli
#include <iostream>
using namespace std;
#include "Square.h"
#include "RightTriangle.h"
#include "Cube.h"
#include "RectangularPrism.h"

int main() {
    Square          sq(4.0);
    RightTriangle   rt(3.0, 4.0);
    Cube            cb(2.0);
    RectangularPrism rp(2.0, 3.0, 4.0);

    cout << sq.getName() << " -> "
         << "side=" << sq.getSide()
         << ", area=" << sq.area()
         << ", perimeter=" << sq.perimeter() << endl;

    cout << rt.getName() << " -> "
         << "base=" << rt.getBase()
         << ", height=" << rt.getHeight()
         << ", area=" << rt.area()
         << ", perimeter=" << rt.perimeter() << endl;

    cout << cb.getName() << " -> "
         << "edge=" << cb.getEdge()
         << ", volume=" << cb.volume()
         << ", surface=" << cb.surfaceArea() << endl;

    cout << rp.getName() << " -> "
         << "w=" << rp.getWidth()
         << ", h=" << rp.getHeight()
         << ", d=" << rp.getDepth()
         << ", volume=" << rp.volume()
         << ", surface=" << rp.surfaceArea() << endl;

     system("pause");
    return 0;
}
