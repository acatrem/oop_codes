#include <iostream>
using namespace std;

class Shape{
    private:
        int x;
        int y;
    public:
        Shape(int X=0, int Y=0) : x(X), y(Y) {
            cout << "Base Shape constructor called." << endl;
        }
        void setCoord(int X, int Y){
            x = X;
            y = Y;
        }
        virtual ~Shape(){
            cout << "Base Shape destructor called." << endl;
        }
};

class Circle : public Shape{
    private:
        float radius;
    public:
        Circle(int X=0, int Y=0, float R=1.0) : Shape(X, Y), radius(R) {
            cout << "Derived Circle constructor called." << endl;
        }
        void setRadius(float r){
            radius = r;
        }
        ~Circle(){
            cout << "Derived Circle destructor called." << endl;
        }
};

int main(){
    Shape *s = new Circle(10,20,5.0);
    s->setCoord(30,40);
    delete s;
    return 0;
    /*
    Output(w/o virtual destructor in base class):
    Base Shape constructor called.
    Derived Circle constructor called.
    Base Shape destructor called.

    Output(with virtual destructor in base class):
    Base Shape constructor called.
    Derived Circle constructor called.
    Derived Circle destructor called.
    Base Shape destructor called.
    */
}