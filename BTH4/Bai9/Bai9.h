#ifndef FILE_H
#define FILE_H
#include<iostream>
using namespace std;
class Interger{
    private:
      int value;
    public:
      Interger(){
         value=0;
      }
      Interger(const Interger& other){
           value=other.value;
      }
      Interger(int num){
      value = num;
     }

      Interger& operator=(const Interger& other);
      Interger operator+(const Interger& other);
      Interger operator-(const Interger& other);
      Interger operator*(const Interger& other);
      Interger operator/(const Interger& other);
      Interger operator%(const Interger& other);
      bool operator==(const Interger& other);
      bool operator!=(const Interger& other);
      bool operator<(const Interger& other);
      bool operator>(const Interger& other);
      bool operator>=(const Interger& other);
      bool operator<=(const Interger& other);
      Interger& operator++();
       Interger operator++(int);
       Interger& operator--();
      Interger operator--(int);
      friend istream& operator>>(istream& is, Interger& num);
      friend ostream& operator<<(ostream& os, const Interger num);
};
#endif