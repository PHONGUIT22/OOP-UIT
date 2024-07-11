#include<iostream>
#include"Bai9.h"
#include"Bai9.cpp"

using namespace std;

int main() {
    Interger a,b;
    cin>>a>>b;
    Interger c = a + b;
    cout << "a + b = " << c <<endl;

    Interger d = a - b;
    cout << "a - b = " << d <<endl;

    Interger e = a * b;
    cout << "a * b = " << e <<endl;

    Interger f = a / b;
    cout << "a / b = " << f <<endl;

    Interger g = a % b;
    cout << "a % b = " << g <<endl;

    cout << "a == b: " << (a == b) <<endl;
    cout << "a != b: " << (a != b) <<endl;
    cout << "a < b: " << (a < b) <<endl;
    cout << "a > b: " << (a > b) <<endl;
    cout << "a <= b: " << (a <= b) <<endl;
    cout << "a >= b: " << (a >= b) <<endl;

    cout << "++a: " << ++a <<endl;
    cout << "a++: " << a++ <<endl;
    cout << "--a: " << --a <<endl;
    cout << "a--: " << a-- <<endl;


    return 0;
}