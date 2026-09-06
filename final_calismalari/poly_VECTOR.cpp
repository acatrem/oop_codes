#include <vector>
#include <iostream>
using namespace std;

class Shape{
    public:
        virtual void draw() = 0; // Saf sanal fonksiyon
        virtual ~Shape() {} // Sanal yikici
};

class Circle : public Shape{
    public:
        void draw() { cout << "Drawing Circle" << endl;}
        ~Circle() {cout << "Destroying Circle" << endl;}
};

class Triangle : public Shape{
    public:
        void draw() { cout << "Drawing Triangle" << endl;}
        ~Triangle() {cout << "Destroying Triangle" << endl;}
};

class Square : public Shape{
    public:
        void draw() { cout << "Drawing Square" << endl;}
        ~Square() {cout << "Destroying Square" << endl;}
};

typedef vector<Shape*> Container;
typedef vector<Shape*>::iterator Iter;
int main(){
    Container shapes, shapes1;
    shapes.push_back(new Circle);
    shapes.push_back(new Square);
    shapes.push_back(new Triangle);
    shapes1.push_back(new Circle);

    cout<< "Shape:\n";
    for(Iter it=shapes.begin(); it!=shapes.end(); ++it){
        (*it)->draw();
    }
    cout<< "Shape1:\n";
    for(Iter it=shapes1.begin(); it!=shapes1.end(); ++it){
        (*it)->draw();
    }

    cout<<"Freeing memory:\n";
    for(Iter it=shapes.begin(); it!=shapes.end(); ++it){
        delete *it;
    }
    for(Iter it=shapes1.begin(); it!=shapes1.end(); ++it){
        delete *it;
    }
    
    return 0;
}