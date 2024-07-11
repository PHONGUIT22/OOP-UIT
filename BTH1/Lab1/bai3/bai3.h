#ifndef FILE_H
#define FILE_H

#include <iostream>
using namespace std;

class PS {
    int tu;
    int mau;

public:
    void nhap();
    void TinhTong(PS b);
    void TinhHieu(PS b);
    void Tich(PS b);
    void Thuong(PS b);    
};

void PS::nhap() {
   cout << "Nhap tu: ";
   cin >> tu;
   cout << "Nhap mau: ";
   cin >> mau;    
}

void PS::TinhTong(PS b) {
   cout << tu * b.mau + mau * b.tu << "/" << mau * b.mau;
}

void PS::TinhHieu(PS b) {
   cout << tu * b.mau - mau * b.tu << "/" << mau * b.mau;
}

void PS::Tich(PS b) {
   cout << tu * b.tu << "/" << mau * b.mau;
}

void PS::Thuong(PS b) {
   cout << tu * b.mau << "/" << mau *b.tu;
}

#endif
