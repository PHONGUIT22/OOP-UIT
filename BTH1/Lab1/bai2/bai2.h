#ifndef FILE_H
#define FILE_H
#include<iostream>
using namespace std;
class PS {
	int tu;
    int mau;
    public:
    void nhap();
    void xuat();
    void kiemtra(PS b);
};
void PS::nhap() {
   cout<<"Nhap tu: ";
   cin>>tu;
   cout<<"Nhap mau: ";
   cin>>mau;	
}

void PS::xuat() {
	cout<<tu<<"/"<<mau;
}

void PS::kiemtra(PS b) {
	if(tu * b.mau > b.tu * mau) {
        xuat();
    }
    else {
        b.xuat();
    }
}
#endif


