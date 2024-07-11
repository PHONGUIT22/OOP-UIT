#ifndef FILE_H
#define FILE_H
#include<iostream>
using namespace std;
class D {
	   int ngay;
	   int thang;
	   int nam;
	public:
	   void nhap();
	   void next();
	   
};
void D::nhap(){
	cout<<"Nhap Ngay:"<<endl;
	cin>>ngay;
	cout<<"Nhap Thang:"<<endl;
	cin>>thang;
	cout<<"Nhap Nam:"<<endl;
	cin>>nam;
}
void D::next(){
	cout<<"The next day is "<<endl;
	if((nam%4==0&&nam%100!=0)||(nam%400==0)){
		if(thang==2){
			if(ngay==29)
			    cout<<1<<"/"<<3<<"/"<<nam;
			else if(ngay<29)
				cout<<ngay+1<<"/"<<thang<<"/"<<nam;
		}
		
		else if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10){
			if(ngay<31) 
			     cout<<ngay+1<<"/"<<thang<<"/"<<nam;
			else if(ngay==31) 
			     cout<<1<<"/"<<thang+1<<"/"<<nam;
		}
		
		else if(thang==4||thang==6||thang==9||thang==11){
		    if(ngay<30) 
			     cout<<ngay+1<<"/"<<thang<<"/"<<nam;
			else if(ngay==30) 
			     cout<<1<<"/"<<thang+1<<"/"<<nam;
		}
		else if(thang==12){
			if(ngay==31) 
			    cout<<1<<"/"<<1<<nam+1;
			else if (ngay<31) 
			    cout<<ngay+1<<"/"<<thang<<"/"<<nam;
		}
	}
	else {
		if(thang==2){
			if(ngay==28)
			    cout<<1<<"/"<<3<<"/"<<nam;
			else if(ngay<28)
				cout<<ngay+1<<"/"<<thang<<"/"<<nam;
		}
		
		else if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10){
			if(ngay<31) 
			     cout<<ngay+1<<"/"<<thang<<"/"<<nam;
			else if(ngay==31) 
			     cout<<1<<"/"<<thang+1<<"/"<<nam;
		}
		
		else if(thang==4||thang==6||thang==9||thang==11){
		    if(ngay<30) 
			     cout<<ngay+1<<"/"<<thang<<"/"<<nam;
			else if(ngay==30) 
			     cout<<1<<"/"<<thang+1<<"/"<<nam;
		}
		else if(thang==12){
			if(ngay==31) 
			     cout<<1<<"/"<<1<<nam+1;
			else if(ngay<31) 
			     cout<<ngay+1<<"/"<<thang<<"/"<<nam;
		}
	}
}
#endif








