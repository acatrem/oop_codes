#include <iostream>
using namespace std;

class Point{
    int x;
    int y;
    //friend Point operator+(const Point &l, const Point &r);
    //friend Point operator++(Point &p);
    //friend Point operator++(Point &p, int d);
public:
    Point(int X=0, int Y=0) : x(X), y(Y) {}
    void print() const{
        cout << "(" << x << "," << y << ")";
    }
    //TEK PARAMETRELİLER
    Point operator++(){ //prefix
            x++;
            y++;
        return *this;
    }
    Point operator++(int d){ //postfix
        Point temp = *this;
        x++;
        y++;
        return temp;
    }
    Point operator--(){ //prefix
            x--;
            y--;
        return *this;
    }
    Point operator--(int d){ //postfix
        Point temp = *this;
        x--;
        y--;
        return temp;
    }
    Point operator!(){
        x = -x;
        y = -y;
        return *this;
    }
    //BİNARYLER
    Point operator+(const Point& p){
        Point tmp;
        tmp.x = x + p.x;
        tmp.y = y + p.y;
        return tmp;
    }
    Point operator-(const Point &p){
        Point tmp;
        tmp.x = x - p.x;
        tmp.y = y - p.y;
        return tmp;
    }
    bool operator==(const Point &p){
        if(x == p.x && y == p.y){
            cout << "Eşit" << endl;
            return true;
        }else{
            cout << "Eşit Değil" << endl;
            return false;
        }
    }
    bool operator!=(const Point &p){
        if(x != p.x || y != p.y){
            cout << "Eşit Değil" << endl;
            return true;
        }else{
            cout << "Eşit" << endl;
            return false;
        }
    }
    bool operator<(const Point &p){
        if(x < p.x && y < p.y){
            cout << "Küçük" << endl;
            return true;   
        }else{
            cout << "Küçük Değil" << endl;
            return false;
        }
    }Point operator+=(const Point &p){
        x += p.x;
        y += p.y;
        return *this;
    }

};

/*
Point operator+(const Point &l, const Point &r){
    Point tmp;
    tmp.x = l.x + r.x;
    tmp.y = l.y + r.y;
    return tmp;
}

Point operator++(Point &p){
    p.x++;
    return p;
}
Point operator++(Point &p, int d){
    Point temp = p;
    return temp;
}
Point operator--(Point &p){
    return p;
}
friend Point operator==(const Point &p1, const Point &p2);
Point operator==(const Point &p1, const Point &p2){
    if(p1.x == p2.x && p1.y == p2.y) cout << "esiittir";
    else cout << "degildir"
}
Point operator<(const Point &p1, const Point &p2){
    if(p1.x < p2.x && p1.y < p2.y) cout << "kucuktur";
    else cout << "kucuk degildir";
}
Point operator+=(const Point &p1, const Point &p2){
    Point temp;
    temp.x = p1.x + p2.x;
    temp.y = p1.y + p2.y;
    return temp;
}
*/

int main(){
    Point p1(2,3);
    Point p2(5,7);
    Point p3;

    p3 = p1 + p2;
    p3.print();
    cout << endl;
    p1 == p2;
    p1 != p2;
    p1 < p2;
    p1 += p2;
    p1.print();
    p1++; //postfix
    p1.print();
    ++p1; //prefix
    p1.print();
    

    return 0;
}