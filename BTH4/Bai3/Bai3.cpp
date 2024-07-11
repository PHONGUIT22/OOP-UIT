#include<iostream>
#include<cmath>
using namespace std;

ostream& operator<<(ostream& os, const CTimeSpan a){
    os<<"Ngay :"<<a.ngay<<" Gio :"<<a.gio<<" Phut :"<<a.phut<<" Giay :"<<a.giay;
    return os;
}
CTimeSpan CTimeSpan::operator+(const CTimeSpan &a) const{
    return CTimeSpan(ngay+a.ngay, gio+a.gio, phut+a.phut, giay+a.giay);
}
CTimeSpan CTimeSpan::operator-(const CTimeSpan &a) const{
    return CTimeSpan(ngay-a.ngay, gio-a.gio, phut-a.phut, giay-a.giay);
}
int CTimeSpan:: operator==(const CTimeSpan &a) const{
    if((ngay==a.ngay)&&(gio==a.gio)&&(phut==a.phut)&&(giay==a.giay)) 
       return 1;
    else return 0;
}
int CTimeSpan:: operator!=(const CTimeSpan &a) const{
    if((ngay!=a.ngay)||(gio!=a.gio)||(phut!=a.phut)||(giay!=a.giay)) 
       return 1;
    else return 0;
}
int CTimeSpan:: operator>(const CTimeSpan &a) const{
    int T1=(ngay*3600*24)+(gio*3600)+(phut*60)+(giay);
    int T2=(a.ngay*3600*24)+(a.gio*3600)+(a.phut*60)+(a.giay);
    if(T1>T2) return 1;
    else return 0;
}
int CTimeSpan:: operator>=(const CTimeSpan &a) const{
    int T1=(ngay*3600*24)+(gio*3600)+(phut*60)+(giay);
    int T2=(a.ngay*3600*24)+(a.gio*3600)+(a.phut*60)+(a.giay);
    if(T1>=T2) return 1;
    else return 0;
}
int CTimeSpan:: operator<(const CTimeSpan &a) const{
    int T1=(ngay*3600*24)+(gio*3600)+(phut*60)+(giay);
    int T2=(a.ngay*3600*24)+(a.gio*3600)+(a.phut*60)+(a.giay);
    if(T1<T2) return 1;
    else return 0;
}
int CTimeSpan:: operator<=(const CTimeSpan &a) const{
    int T1=(ngay*3600*24)+(gio*3600)+(phut*60)+(giay);
    int T2=(a.ngay*3600*24)+(a.gio*3600)+(a.phut*60)+(a.giay);
    if(T1<=T2) return 1;
    else return 0;
}
