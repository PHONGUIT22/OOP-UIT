#ifndef FILE_H
#define FILE_H
#include<iostream>
using namespace std;
class CTimeSpan{
      private:
         int ngay;
         int gio;
         int phut;
         int giay;
      public:
          CTimeSpan(int ngay=0, int gio=0, int phut=0, int giay=0){
                 this->ngay=ngay;
                 this->gio=gio;
                 this->phut=phut;
                 this->giay=giay;
          }
          ~CTimeSpan(){}
          friend istream& operator>>(istream &is, CTimeSpan &a);
          friend ostream& operator<<(ostream &os, const CTimeSpan a);
          CTimeSpan operator+(const CTimeSpan &a) const;
          CTimeSpan operator-(const CTimeSpan &a) const;
          int operator==(const CTimeSpan &a) const;
          int operator!=(const CTimeSpan &a) const;
          int operator>(const CTimeSpan &a) const;
          int operator>=(const CTimeSpan &a) const;
          int operator<=(const CTimeSpan &a) const;
          int operator<(const CTimeSpan &a) const;
};
istream& operator>>(istream& is, CTimeSpan &a){
    is>>a.ngay;
    is>>a.gio;
    is>>a.phut;
    is>>a.giay;
    int Tong=(a.ngay*3600*24)+(a.gio*3600)+(a.phut*60)+(a.giay);
    a.ngay = Tong / (24 * 3600);
    Tong %= (24 * 3600);
    a.gio= Tong / 3600;
    Tong %= 3600;
    a.phut = Tong / 60;
    a.giay = Tong % 60;
    return is;
}
#endif