#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class GiaSuc {
protected:
    int soLuongCon;
    int soLuongSua;
public:
    GiaSuc() {
        soLuongCon = 0;
        soLuongSua = 0;
    }
    virtual void keu() = 0;
    virtual void sinhCon() {
        soLuongCon += rand() % 10 + 1;
    }
    virtual void choSua() = 0;
    int getSoLuongCon() {
        return soLuongCon;
    }
    int getSoLuongSua() {
        return soLuongSua;
    }
};

class Bo : public GiaSuc {
public:
    Bo() : GiaSuc() {}
    void keu() {
        cout << "Bo keu: Um bo bo" << endl;
    }
    void choSua() {
        soLuongSua += rand() % 21;
    }
};

class Cu : public GiaSuc {
public:
    Cu() : GiaSuc() {}
    void keu() {
        cout << "Cu keu: Be be be" << endl;
    }
    void choSua() {
        soLuongSua += rand() % 6;
    }
};

class De : public GiaSuc {
public:
    De() : GiaSuc() {}
    void keu() {
        cout << "De keu: Meh meh meh" << endl;
    }
    void choSua() {
        soLuongSua += rand() % 11;
    }
};

int main() {
    srand(time(0));
    
    int soBo, soCu, soDe;
    
    cout << "Nhap so luong bo: ";
    cin >> soBo;
    
    cout << "Nhap so luong cu: ";
    cin >> soCu;
    
    cout << "Nhap so luong de: ";
    cin >> soDe;
    
    int tongSoGiaSuc = soBo + soCu + soDe;
    
    GiaSuc** dsGiaSuc = new GiaSuc*[tongSoGiaSuc];
    
    for (int i = 0; i < tongSoGiaSuc; i++) {
        if (i < soBo) {
            dsGiaSuc[i] = new Bo();
        } else if (i < soBo + soCu) {
            dsGiaSuc[i] = new Cu();
        } else {
            dsGiaSuc[i] = new De();
        }
        
        dsGiaSuc[i]->sinhCon();
        dsGiaSuc[i]->choSua();
        
        dsGiaSuc[i]->keu();
        
        cout << "So con: " << dsGiaSuc[i]->getSoLuongCon() << endl;
        cout << "So sua: " << dsGiaSuc[i]->getSoLuongSua() << endl;
        
        delete dsGiaSuc[i];
    }
    
    delete[] dsGiaSuc;

}
//Uu diem lien ket dong: -Cho phep xac dinh phuong thuc cu the
//                       -Giup chuong trinh co kha nang linh hoat va de mo rong
//                       -Co kha nang truu tuong hoa
