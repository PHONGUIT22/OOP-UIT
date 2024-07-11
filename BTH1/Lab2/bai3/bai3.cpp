#include <iostream>
#include <string>
#include"bai3.h"
using namespace std;
int main()
{
    int n;
    cout<<"Nhap so thi sinh"<<endl;
    cin >> n;
    Candidate *a=new Candidate[n];
    for (int i = 0; i < n; i++)
        a[i].nhap();
    cout << "Diem tren 15:"<<endl;
    for (int i = 0; i < n; i++)
        a[i].tren15();
    return 1;
}
