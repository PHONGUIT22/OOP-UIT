#include<iostream>
#include<cmath>
#include"Bai7.h"
#include"Bai7.cpp"
using namespace std;
int main() {
    DaThuc obj1;
    cin >> obj1;
    cout << "Da thuc 1: " << obj1 << endl;

    DaThuc obj2;
    cin >> obj2;
    cout << "Da thuc 2: " << obj2 << endl;

    DaThuc sum = obj1 + obj2;
    cout << "Tong hai da thuc: " << sum << endl;

    DaThuc diff = obj1 - obj2;
    cout << "Hieu hai da thuc: " << diff << endl;

    DaThuc prod = obj1 * obj2;
    cout << "Tich hai da thuc: " << prod << endl;
    
    DaThuc chia= obj1/obj2;
    cout<< "Thuong hai da thuc: "<< chia <<endl;
   
    return 0;
}
