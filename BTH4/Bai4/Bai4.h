#ifndef FILE_H
#define FILE_H
#include<iostream>
using namespace std;
class CTime{
    private:
       int gio;
       int phut;
       int giay;
    public:
       CTime(){
          gio=phut=giay=0;
       }
       CTime(int gio, int phut, int giay){
          this->gio=gio;
          this->giay=giay;
          this->phut=phut;
       }
       friend istream& operator>>(istream& is, CTime &a);
       friend ostream& operator<<(ostream& os, const CTime a);
       CTime operator+(int giay);
       CTime operator-(int giay);
       CTime& operator++();
       CTime& operator--();

};

#endif