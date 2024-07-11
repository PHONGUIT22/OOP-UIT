#include<iostream>
#include"bai1.h"
using namespace std;
int main(){
	PS a,b;
	cout<<"Nhap phan so 1"<<endl;
	a.nhap();
	cout<<endl;
	cout<<"Nhap phan so 2"<<endl;
	b.nhap();
	cout<<endl;
	cout<<"Tong phan so"<<endl;
	a.TinhTong(b);
	cout<<endl;
	cout<<"Hieu phan so"<<endl;
	a.TinhHieu(b);
	cout<<endl;
	cout<<"Tich phan so"<<endl;
	a.Tich(b);
	cout<<endl;
	cout<<"Chia phan so"<<endl;
	a.Thuong(b);
	cout<<endl;
	return 0;
}
