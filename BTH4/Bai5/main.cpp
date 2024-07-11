#include <iostream>
#include <array>
#include "Bai5.h"
#include "Bai5.cpp"
using namespace std;
int main() {
    CDate date1 ;
    CDate date2;
    cin>>date1;
    cin>>date2;
    cout << "Ngay 1: " << date1 << endl;
    cout << "Ngay 2: " << date2 << endl;

    int difference = date1 - date2;
    cout << "Khoang cach giua hai ngay: " << abs(difference) << " ngay" << endl;

    return 0;
}
