#include<iostream>
#include<cmath>
using namespace std;

float PhanSo::UCLN(float a, float b) const{
    if (a == 0) return b;
    return UCLN(fmod(b,a), a);
}
istream& operator>>(istream &is, PhanSo &a){
    is>>a.tu;
    is>>a.mau;
    return is;
}
ostream& operator<<(ostream &os,const PhanSo a){
    float c=a.UCLN(a.tu,a.mau);
    if((a.mau)/c!=1){
      os<<(a.tu)/c<<"/"<<(a.mau)/c;
    }
    else if((a.mau)/c==1){
        cout<<(a.tu)/(a.mau);
    }
    return os;
};   
PhanSo PhanSo:: operator+(const PhanSo &b) const{
     return PhanSo(((tu*b.mau)+(b.tu*mau)),(mau*b.mau));
}
PhanSo PhanSo:: operator-(const PhanSo &b) const{
     return PhanSo(((tu*b.mau)-(b.tu*mau)),(mau*b.mau));
}   
PhanSo PhanSo:: operator*(const PhanSo &b) const{
     return PhanSo((tu*b.tu),(mau*b.mau));
} 
PhanSo PhanSo:: operator/(const PhanSo &b) const{
     return PhanSo((tu*b.mau),(mau*b.tu));
} 
int PhanSo:: operator==(const PhanSo &b) const{
     if((tu/mau)==(b.tu/b.mau)) return 1;
     else return 0;
}
int PhanSo:: operator!=(const PhanSo &b) const{
     if((tu/mau)!=(b.tu/b.mau)) return 1;
     else return 0;
}
int PhanSo:: operator>(const PhanSo &b) const{
     if((tu/mau)>(b.tu/b.mau)) return 1;
     else return 0;
}
int PhanSo:: operator>=(const PhanSo &b) const{
     if((tu/mau)>=(b.tu/b.mau)) return 1;
     else return 0;
}
int PhanSo:: operator<(const PhanSo &b) const{
     if((tu/mau)<(b.tu/b.mau)) return 1;
     else return 0;
}
int PhanSo:: operator<=(const PhanSo &b) const{
     if((tu/mau)<=(b.tu/b.mau)) return 1;
     else return 0;
}
  
