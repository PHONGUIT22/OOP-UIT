#include<iostream>
#include<cmath>
#include"Bai2.h"
#include"ThoiGian.cpp"
using namespace std;


int main(){
	CTime Time1(0,0,0);
	cout<<"Nhap thoi diem thu nhat "<<endl;
	Time1.Nhap();
	CTime Time2(0,0,0);
	cout<<"Nhap thoi diem thu hai "<<endl;
	Time2.Nhap();
	cout<<"Gio phut giay thu 1 "<<endl;
	Time1.Xuat();
	cout<<"Gio phut giay thu 2 "<<endl;
	Time2.Xuat();
	cout<<"-----------------MENU---------------"<<endl;
	cout<<"Nhap lua chon "<<endl;
	int lc;cin>>lc;
	if(lc==1){
		Time1.Cong();
	    Time2.Cong();
	}
	else if(lc==2){
		Time1.Tru();
	    Time2.Tru();
	}
	else if(lc==3){
		cout<<"Them 1 giay "<<endl;
		Time1.Tang();
	}
	else if(lc==4){
		cout<<"Giam 1 giay "<<endl;
		Time1.Bot();
	}
	cout<<"------------------------------------"<<endl;
	CTimSpan span=Time1.Tru(Time2);
	span.Xuat();
	return 0;
}
