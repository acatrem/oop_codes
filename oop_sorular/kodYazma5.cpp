#include <iostream>
#include <vector>
using namespace std;

class Shape{
    public:
        virtual double alanHesapla () = 0; // Saf sanal fonksiyon
        virtual ~Shape() {} // Sanal yıkıcı
};

class Circle : public Shape{
    private:
        double radius;
    public:
        Circle(int r) : radius(r) {}
        double alanHesapla () override{
            return 3.14159 * radius * radius;
        }
};

class Square : public Shape{
    private:
        double side;
    public:
        Square(int s) : side(s) {}
        double alanHesapla() override{
            return side * side;
        }
};

int main(){
    vector<Shape*> shapes;
    shapes.push_back(new Circle(5));
    shapes.push_back(new Square(4));

    for(Shape* shape : shapes){
        cout << "Alan: " << shape->alanHesapla() << endl;
    }
    // Bellek sızıntısını önlemek için dinamik olarak ayrılan bellekleri temizleyelim
    for(Shape* shape : shapes){
        delete shape;
    }
    
    return 0;
}