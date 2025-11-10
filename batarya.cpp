#include <iostream>
using namespace std;

class Batarya{
private:
    float seviye;
    const double zaman;

public:
    Batarya(float s, double z) : seviye(s), zaman(z){
    }
    float dolumSuresi() const{
        return ((100.0 - seviye) * zaman);
    }
    void goster() const{
        cout<<"Seviye: "<<seviye<< endl;
        cout<<"Sarj suresi: "<<((100.0 - seviye) * zaman)<<endl;
    }
};

int main(){
    Batarya b1(30.0, 5);
    cout << "Dolum Suresi: "<< b1.dolumSuresi() << endl;
    b1.goster();
    return 0;
}