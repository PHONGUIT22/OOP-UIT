#include<iostream>
#include<cmath>
#include<graphics.h>
#define PI 3.14159265
#include"Bai2.h"
#include"TamGiac.cpp"
using namespace std;

 void TamGiac::Draw(){
 	
 }
int main(){
	TamGiac obj;
	obj.Nhap();
	obj.Xuat();
	cout<<"Tam giac ban dau la "<<endl;
	cout<<"----------Menu----------"<<endl;
	cout<<"Chon chuc nang"<<endl;
	int lc;cin>>lc;
	if(lc==1){
		obj.TinhTien();
	}
	else if(lc==2){
	   obj.Quay();	
	}
	else if(lc==3){
		obj.PhongTo();
	}
	else if(lc==4){
		obj.ThuNho();
	}
	cout<<"------------------------"<<endl;

	return 0;
}
