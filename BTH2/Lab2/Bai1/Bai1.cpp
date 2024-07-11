#include<iostream>
#include"Bai1.h"
#include"ThoiGian.cpp"
using namespace std;


int main(){
	CTimeSpan t1,t2;
	cout<<"Nhap ngay gio phut giay cua t1"<<endl;
	t1.Nhap();
	cout<<"Nhap ngay gio phut giay cua t2"<<endl;
	t2.Nhap();
	t1.Xuat();
	t2.Xuat();
	//
	cout<<"------------MENU-------------"<<endl;
	cout<<"Nhap lua chon "<<endl;
	int lc;cin>>lc;
	if(lc==1) {
		t1.Cong(t2);
	}
	else if(lc==2){
	    t1.Tru(t2);	
	}
	else if(lc==3){
		t1.Bang(t2);
	}
	else if(lc==4){
		t1.Khac(t2);
	}
	else if(lc==5){
		t1.LonHon(t2);
	}
	else if(lc==6){
		t1.BeHon(t2);
	}
	else if(lc==7){
		t1.LonHonhoacBang(t2);
	}
	else if(lc==5){
		t1.BeHonhoacBang(t2);
	}
	cout<<"----------------------------"<<endl;
	return 0;
}
