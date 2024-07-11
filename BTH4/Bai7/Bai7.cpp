#include<iostream>
#include<cmath>
using namespace std;

istream& operator>>(istream& is, DaThuc &a){
    cout<<"Nhap so bac da thuc :";
    is>>a.n;
    for(int i=0;i<=a.n;i++){
        cout<<"Nhap he so bac "<<i<<endl;
        is>>a.a[i];
    }
    return is;
}
    
ostream& operator<<(ostream& os,const DaThuc a){
    for(int i=a.n;i>=0;i--){
        if((i==a.n)&&(a.a[i]>0)){
            os<<a.a[i]<<"x^"<<i<<" ";
        }
        if(i<a.n){
             if(a.a[i]<0) os<<a.a[i]<<"x^"<<i<<" ";
             else if(a.a[i]>0) os<<"+"<<a.a[i]<<"x^"<<i<<" ";
        }
    }
    os<<endl;
    return os;
}

DaThuc DaThuc::operator+(const DaThuc& other) const {
    int maxN = max(n, other.n);
    float *newA = new float[maxN + 1];
    for (int i = 0; i <= maxN; i++) {
        float aVal = (i <= n) ? a[i] : 0;
        float bVal = (i <= other.n) ? other.a[i] : 0;
        newA[i] = aVal + bVal;
    }
    return DaThuc(newA, maxN);
}

DaThuc DaThuc::operator-(const DaThuc& other) const {
    int maxN = max(n, other.n);
    float *newA = new float[maxN + 1];
    for (int i = 0; i <= maxN; i++) {
        float aVal = (i <= n) ? a[i] : 0;
        float bVal = (i <= other.n) ? other.a[i] : 0;
        newA[i] = aVal - bVal;
    }
    return DaThuc(newA, maxN);
}

DaThuc DaThuc::operator*(const DaThuc& other) const {
    int newN = n + other.n;
    float *newA = new float[newN + 1];
    for (int i = 0; i <= newN; i++) {
        newA[i] = 0;
        for (int j = 0; j <= i; j++) {
            if (j <= n && (i - j) <= other.n)
                newA[i] += a[j] * other.a[i - j];
        }
    }
    return DaThuc(newA, newN);
}
DaThuc DaThuc::operator/(const DaThuc& other) const {
    if (other.n == 0 && other.a[0] == 0) {
        throw std::invalid_argument("Division by zero polynomial");
    }
    if (n < other.n) {
        float *newA = new float[1];
        newA[0] = 0;
        return DaThuc(newA, 0);
    }
    int newN = n - other.n;
    float *newA = new float[newN + 1];
    DaThuc remainder(*this);
    for (int i = newN; i >= 0; i--) {
        newA[i] = remainder.a[i + other.n] / other.a[other.n];
        for (int j = i + other.n; j >= i; j--) {
            remainder.a[j] -= newA[i] * other.a[j - i];
        }
    }
    return DaThuc(newA, newN);
}
