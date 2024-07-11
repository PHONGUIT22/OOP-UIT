#ifndef FILE_H
#define FILE_H
#include<iostream>
using namespace std;
class PhanSo{
      private:
        float tu,mau;
      public:
        PhanSo(){
            tu=mau=0.0;
        }
        PhanSo(float tu, float mau){
            this->tu=tu;
            this->mau=mau;    
        }
        ~PhanSo(){}
        friend istream& operator>>(istream &is, PhanSo &a);
        friend ostream& operator<<(ostream &os,const PhanSo a);
        float UCLN(float a, float b) const;
        PhanSo operator+(const PhanSo &b) const;  
        PhanSo operator-(const PhanSo &b) const;
        PhanSo operator*(const PhanSo &b) const;
        PhanSo operator/(const PhanSo &b) const;
        int operator==(const PhanSo &b) const;
        int operator!=(const PhanSo &b) const;
        int operator>(const PhanSo &b) const;
        int operator>=(const PhanSo &b) const;
        int operator<(const PhanSo &b) const;
        int operator<=(const PhanSo &b) const;
};
#endif