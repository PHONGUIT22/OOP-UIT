#include<iostream>
#include<cmath>
#include"bai2.h"
using namespace std;

int main() {
	PS a,b;
    cout<<"Nhap phan so thu nhat:\n";
	a.nhap();
    cout<<"Nhap phan so thu hai:\n";
	b.nhap();
    cout<<"Phan so lon hon la: ";
	a.kiemtra(b);
    cout<<endl;
}

