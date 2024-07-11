#ifndef FILE_H
#define FILE_H
#include<iostream>
using namespace std;
class DaThuc{
    private:
      int n;
      float *a;
    public:
      friend istream& operator>>(istream& is, DaThuc &a);
      friend ostream& operator<<(ostream& os, const DaThuc a);
      DaThuc operator+(const DaThuc& other) const;
      DaThuc operator-(const DaThuc& other) const;
      DaThuc operator*(const DaThuc& other) const;
      DaThuc operator/(const DaThuc& other) const;
    
      
 DaThuc(){
    a = new float[n];
}
DaThuc(float *a, int n){
    this->n = n;
    this->a = new float[n];
    for (int i = 0; i < n; i++) {
        this->a[i] = a[i];
    }
}

   ~DaThuc(){
        
     }
};

#endif