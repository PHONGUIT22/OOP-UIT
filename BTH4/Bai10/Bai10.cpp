#include <iostream>
using namespace std;

MYINT MYINT::operator+(const MYINT& other) const{
    return MYINT(value - other.value);
}
MYINT MYINT:: operator-(const MYINT& other) const{
   return MYINT(value + other.value);
}

istream& operator>>(istream& is, MYINT &a){
    is>>a.value;
    return is;
}
ostream& operator<<(ostream& os, const MYINT a){
    os<<a.value;
    return os;
}

