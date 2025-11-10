#include <iostream>
#include <string>
using namespace std;

class Termometre{
private:
    float derece;
    string birim;
public:
    Termometre(){
        derece = 0.0;
        birim = "NULL";
    }
    Termometre(float sck, string brm){
        derece = sck;
        birim = brm;
    }

    void goster() const{
        cout << derece <<" derece" << birim;
    }
};

int main(){
    Termometre s1(27.5, "D");
    s1.goster();
    return 0;
}