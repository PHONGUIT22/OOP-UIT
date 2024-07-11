#include<iostream>
#include<cmath>
#include"Bai2.h"
using namespace std;
void CTimSpan::Xuat(){
	cout<<"Sau khi tru hai CTime co ket qua la "<<Seconds<<" giay"<<endl;
}  

void CTime::Nhap(){
	 cout<<"Nhap gio :"<<endl;
	 cin>>Hours;
	 cout<<"Nhap phut :"<<endl;
	 cin>>Minutes;
	 cout<<"Nhap giay :"<<endl;
	 cin>>Seconds;
	 // chuyen doi
	 int totalSeconds = Hours * 3600 + Minutes * 60 + Seconds;
     Hours = totalSeconds / 3600;
     totalSeconds %= 3600;
     Minutes = totalSeconds / 60;
     Seconds = totalSeconds % 60; 
}
void CTime::Xuat(){
	    
        cout << Hours << ":" << Minutes << ":" << Seconds << endl;
}
void CTime::Cong(){
	cout<<"Nhap so nguyen can cong "<<endl;
	int s;cin>>s;
	cout<<"Thoi diem sau khi cong so nguyen (giay) "<<endl;
	Seconds+=s;
	cout << Hours << ":" << Minutes << ":" << Seconds << endl;
}
void CTime::Tru(){
	cout<<"Nhap so nguyen can tru "<<endl;
	int s;cin>>s;
	cout<<"Thoi diem sau khi tru so nguyen (giay) "<<endl;
	Seconds-=s;
	cout << Hours << ":" << Minutes << ":" << Seconds << endl;
}
void CTime::Tang(){
	Seconds++;
	cout<<"Sau khi tang 1 giay la "<<endl;
	cout << Hours << ":" << Minutes << ":" << Seconds << endl;
}
void CTime::Bot(){
	Seconds--;
	cout<<"Sau khi giam 1 giay la "<<endl;
	cout << Hours << ":" << Minutes << ":" << Seconds << endl;
}
CTimSpan CTime::Tru(CTime Time2){
	 int s1 = Hours * 3600 + Minutes * 60 + Seconds;
     int s2 = Time2.Hours * 3600 + Time2.Minutes * 60 + Time2.Seconds;
     return CTimSpan(abs(s1-s2));
}
