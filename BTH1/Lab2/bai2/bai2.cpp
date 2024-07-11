#include<iostream>
#include<cmath>
#include"bai2.h"
using namespace std;
int main(){
	SoPhuc a,b;
	cout<<"Nhap so a"<<endl;
	a.nhap();
	cout<<endl;
	cout<<"Nhap so b"<<endl;
	b.nhap();
	cout<<endl;
	
	cout<<"Cong so phuc a va b:"<<endl;
	a.cong(b);
	cout<<endl;

	cout<<"Tru so phuc a va b:"<<endl;
	a.tru(b);
	cout<<endl;

	cout<<"Nhan so phuc a va b:"<<endl;
	a.nhan(b);
	cout<<endl;

	cout<<"Chia so phuc a va b:"<<endl;
	a.chia(b);
	return 1;
}
