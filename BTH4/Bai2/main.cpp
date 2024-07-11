#include<iostream>
#include<cmath>
#include"Bai2.h"
#include"Bai2.cpp"
using namespace std;
int main(){
    PhanSo obj1;
    PhanSo obj2;
    cin>>obj1;
    cin>>obj2;
    cout << "obj1 + obj2 = " << obj1 + obj2 << endl;
    cout << "obj1 - obj2 = " << obj1 - obj2 << endl;
    cout << "obj1 * obj2 = " << obj1 * obj2 << endl;
    cout << "obj1 / obj2 = " << obj1 / obj2 << endl;
    if (obj1 > obj2) {
        cout << "obj1 lon hon obj2" << endl;
    } else if (obj1 == obj2) {
        cout << "obj1 bang obj2" << endl;
    } else {
        cout << "obj1 be hon obj2" << endl;
    }

    if (obj1 >= obj2) {
        cout << "obj1 lon hon hoac bang obj2" << endl;
    } else {
        cout << "obj1 be hon hoac bang obj2" << endl;
    }

    return 0;
}  