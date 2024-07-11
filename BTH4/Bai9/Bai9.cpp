#include<iostream>
#include"Bai9.h"
using namespace std;

Interger& Interger::operator=(const Interger& other){
    value=other.value;
    return *this;
}
Interger Interger::operator+(const Interger& other){
    return Interger(value+other.value);
}
Interger Interger::operator-(const Interger& other){
    return Interger(value-other.value);
}
Interger Interger::operator*(const Interger& other){
    return Interger(value*other.value);
}
Interger Interger::operator/(const Interger& other){
    return Interger(value/other.value);
}
Interger Interger::operator%(const Interger& other){
    return Interger(value%other.value);
}

bool Interger::operator==(const Interger& other){
    return value==other.value;
}
bool Interger::operator!=(const Interger& other){
    return value!=other.value;
}
bool Interger::operator>(const Interger& other){
    return value>other.value;
}
bool Interger::operator<(const Interger& other){
    return value<other.value;
}
bool Interger::operator<=(const Interger& other){
    return value<=other.value;
}
bool Interger::operator>=(const Interger& other){
    return value>=other.value;
}
Interger& Interger::operator++(){
    ++value;
    return *this;
}

Interger Interger::operator++(int){
    Interger temp(*this);
    ++value;
    return temp;
}

Interger& Interger::operator--(){
    --value;
    return *this;
}

Interger Interger::operator--(int){
    Interger temp(*this);
    --value;
    return temp;
}

istream& operator>>(istream& is, Interger& num){
    is >> num.value;
    return is;
}

ostream& operator<<(ostream& os, const Interger num){
    os << num.value;
    return os;
}
