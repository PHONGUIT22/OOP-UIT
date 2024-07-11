#include<iostream>
#include<cmath>
using namespace std;

istream& operator>>(istream& is, CTime &a){
    is>>a.gio>>a.phut>>a.giay;
    int Tong = a.gio * 3600 +a.phut * 60 + a.giay;
    a.gio = Tong / 3600;
    Tong %= 3600;
    a.phut = Tong / 60;
    a.giay = Tong % 60; 
    return is;
}
ostream& operator<<(ostream& os, const CTime a){
    os<<" Gio :"<<a.gio<<" Phut :"<<a.phut<<" Giay :"<<a.giay<<endl;
    return os;
}
CTime CTime::operator+(int seconds) {
    CTime result = *this;
    result.giay += seconds;
    result.phut += result.giay / 60;
    result.giay %= 60;
    result.gio += result.phut / 60;
    result.phut %= 60;
    return result;
}

CTime CTime::operator-(int seconds) {
    CTime result = *this;
    result.giay -= seconds;
    while (result.giay < 0) {
        result.giay += 60;
        result.phut--;
    }
    while (result.phut < 0) {
        result.phut += 60;
        result.gio--;
    }
    return result;
}
CTime& CTime::operator++() {
    *this = *this + 1;
    return *this;
}

CTime& CTime::operator--() {
    *this = *this - 1;
    return *this;
}

