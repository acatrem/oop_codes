#include <iostream>
using namespace std;

class Hayvan {
public:
    void sesCikar() { cout << "Ses"; }
};

class Kedi : public Hayvan {
public:
    void sesCikar() { cout << "Miyav"; }
};

int main() {
    Hayvan* h = new Kedi();
    h->sesCikar();
    // output(w/o virtual): Ses
    // output(with virtual): Miyav
    return 0;
}