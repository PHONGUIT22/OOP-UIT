#ifndef FILE_H
#define FILE_H
#include<iostream>
using namespace std;
class MYINT {
private:
    int value;

public:
    MYINT(int val = 0) {
        value = val;
    }
    friend istream& operator>>(istream& is, MYINT &a);
    friend ostream& operator<<(ostream& os, const MYINT a);

    MYINT operator+(const MYINT& other) const;
        
    MYINT operator-(const MYINT& other) const;
    
    int getValue() const {
        return value;
    }
};
#endif