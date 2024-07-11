#ifndef FILE_H
#define FILE_H
#include<iostream>
using namespace std;

class PS{
    int tu;
    int mau;
    public:
    void nhap();
    int UCLN(int a, int b);
    void rutgon();
};

void PS::nhap(){
    cout<<"Nhap tu so"<<endl;
    cin >> tu;
    cout<<"Nhap mau so"<<endl;
    cin >> mau;
}
int PS::UCLN(int a, int b){
    if (a % b == 0){
        return b;
    }
    return UCLN(b, a % b);
}

void PS::rutgon(){
    cout<<"Rut Gon Phan So"<<endl;
    int uc = UCLN(tu, mau);
    tu =tu/ uc;
    mau =mau/ uc;
    cout << tu << "/" << mau;
}

#endif

