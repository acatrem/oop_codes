#include <iostream>
using namespace std;

class Shape{
protected:
    int width, height;
public:
    void setDimensions(int w, int h){
        width = w;
        height = h;
    }
    int area() const{
        return width * height;
    }

};

class Rectangle : public Shape{
public:
    Rectangle operator+(const Rectangle &r){
        Rectangle temp;
        temp.width = this->width + r.width;
        temp.height = this->height + r.height;
        return temp;
    }
};

int main(){
    Rectangle r1,r2;
    r1.setDimensions(10,5);
    r2.setDimensions(20,15);
    Rectangle r3 = r1 + r2;;
    int toplamAlan = r3.area();
    cout << "Toplam Alan: " << toplamAlan << endl;
    return 0;
}