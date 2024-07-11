#include<iostream>
#include<cmath>
#include"Bai4.h"
#include"DaThuc.cpp"
using namespace std;
int main(){
	DaThuc obj1;
	DaThuc obj2;
	cout<<"Nhap da thuc thu 1 "<<endl;
	obj1.Nhap();
	cout<<"Xuat da thuc thu 1 "<<endl;
	obj1.Xuat();
	cout<<"Nhap da thuc thu 2 "<<endl;
	obj2.Nhap();
	cout<<"Xuat da thuc thu 2 "<<endl;
	obj2.Xuat();
	cout<<"------------MENU------------"<<endl;
	cout<<"Nhap chuc nang "<<endl;
	int lc;cin>>lc;
	if(lc==1){
		obj1.TinhDaThuc();
		obj1.TinhDaThuc();
	}
	else if(lc==2){
		cout<<"Cong hai da thuc "<<endl;
		obj1.CongDaThuc(obj2);
	}
	else if(lc==3){
		cout<<"Cong hai da thuc "<<endl;
	    obj1.TruDaThuc(obj2);
	}
	cout<<"---------------------------"<<endl;
	return 0;
}
