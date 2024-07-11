#include<iostream>
#include"Bai10.h"
#include"Bai10.cpp"
int main() {
    MYINT a;
    MYINT b;
    cin>>a;
    cin>>b;
    MYINT sum = a + b;
    MYINT diff = a - b;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff <<endl;

    return 0;
}