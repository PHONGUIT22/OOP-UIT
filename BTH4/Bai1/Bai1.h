#ifndef FILE_H
#define FILE_H
#include<iostream>
using namespace std;
 class SoPhuc{
     private:
        float thuc,ao;
     public:
        SoPhuc(){
            this->thuc=this->ao=0.0;
        }
        SoPhuc(float thuc, float ao){
            this->thuc=thuc;
            this->ao=ao;
        }
        ~SoPhuc(){

        }
        friend istream& operator>>(istream& is, SoPhuc &a);//Nhap 
        friend ostream& operator<<(ostream& os, const SoPhuc a);//Xuat
        SoPhuc operator+(const SoPhuc &a) const;
        SoPhuc operator-(const SoPhuc &a) const;
        SoPhuc operator*(const SoPhuc &a) const;
        SoPhuc operator/(const SoPhuc &a) const;
        bool   operator!=(const SoPhuc &a) const;
        bool   operator==(const SoPhuc &a) const;
        bool   operator>(const SoPhuc &a) const;
        bool   operator>=(const SoPhuc &a) const;
        bool   operator<(const SoPhuc &a) const;
        bool   operator<=(const SoPhuc &a) const;
        
};
#endif