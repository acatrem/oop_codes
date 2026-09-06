#include <iostream>
#include <string>
#include <list>
using namespace std;

template <typename T1, typename T2>
class Konum{
    private:
        T1 x;
        T1 y;
        T2 yon;
    public:
        Konum(T1 _x=0, T1 _y=0, T2 _yon=0) : x(_x), y(_y), yon(_yon) {}
        void operator+=(int artis);
        void setXY(T1 _x, T1 _y);
        void getXY(T1 &_x, T1 &_y) const;
        void setTh(T2 _yon);
        float getTh() const;
};

template <typename T1, typename T2>
void Konum<T1, T2>::setXY(T1 _x, T1 _y){
    x = _x;
    y = _y;
}

template <typename T1, typename T2>
void Konum<T1, T2>::getXY(T1 &_x, T1 &_y) const{
    _x = x;
    _y = y;
}

template <typename T1,typename T2>
void Konum<T1, T2>::setTh(T2 _yon){
    yon = _yon;
}

template <typename T1, typename T2>
float Konum<T1, T2>::getTh() const{
    return yon;
}
// soru 2 icin
template <typename T1, typename T2>
void Konum<T1, T2>::operator+=(int artis){
    yon += artis;
}
