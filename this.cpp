#include <iostream>
using namespace std;
class Point{
    private:
        int x;
        int y;
    public:
        Point(int X=0, int Y=0) : x(X), y(Y) {}
        void print() const{
            cout << "(" << this->x // !
            << ","
            << (*this).y // ! 
            << "," ;
        }

        Point add(int i){
            x += i;
            y += i;
            return (*this);
        }
};

int main(){
    Point p1 (1,2);
    Point p2 (3,4);
    Point p3;
    p1.print();
    p2.print();
    // (1,2,(3,4,
    p3 = p1.add(3); // x=4 , y=5
    
    return 0;
    
}