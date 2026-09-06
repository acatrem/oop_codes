#include <iostream>
using namespace std;

class Cihaz{
    protected:
        int id;
    public:
        Cihaz(int Id) : id(Id) {}
        void bilgi(){
            cout << "Cihaz ID: "<< this->id;
        }
};

class Yazici : virtual public Cihaz{
    public:
        Yazici(int Id) : Cihaz(Id) {}
};

class Tarayici : virtual public Cihaz{
    public:
        Tarayici(int Id) : Cihaz(Id) {}
};

class FotokopiMakinesi : public Yazici, public Tarayici{
    public:
        FotokopiMakinesi(int Id) : Yazici(Id), Tarayici(Id),Cihaz(Id){} // en alt child class, constructor yaparken parent ,grandparent constructorları çağırması lazım
};
/*
Neden Hata Aldın?
Derleyici FotokopiMakinesi'ni oluştururken kural gereği en tepeye (Cihaz) gidip onu başlatmak ister. Ama bakar ki Cihaz sınıfı bir int bekliyor.

Slayttaki gibi boş bırakırsan derleyici şunu sorar: "Cihaz sınıfını başlatmam lazım ama benden bir sayı istiyor. O sayıyı bana vermedin, ne yapayım?"

İşte bu yüzden, senin kodunda FotokopiMakinesi yapıcısına Cihaz(Id) ekleyerek o eksik parçayı (int parametresini) elle vermemiz gerekti.

Özetle:

Eğer Cihaz sınıfında parametresiz (default) constructor olsaydı (veya hiç constructor yazmasaydın), slayttaki gibi senin de ekleme yapmana gerek kalmazdı.

Parametre istediğin için, o parametreyi en alttaki sınıftan (patrondan) açıkça göndermek zorundasın.
*/

int main() {
    FotokopiMakinesi fm(12345);
    
    // Eğer virtual kullanmazsan burası hata verir:
    fm.bilgi(); // Çıktı: "Cihaz ID: 12345"
    
    return 0;
}