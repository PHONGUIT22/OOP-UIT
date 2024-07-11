#include<iostream>
#include<cmath>
#include"Bai1.h"
using namespace std;
void CTimeSpan::Nhap(){
	  cout<<"Nhap Ngay "<<endl;cin>>Days;
	  cout<<"Nhap Gio "<<endl;cin>>Hours;
	  cout<<"Nhap Phut "<<endl;cin>>Minutes;
	  cout<<"Nhap Giay "<<endl;cin>>Seconds;
	  int totalSeconds = Days * 24 * 3600 + Hours * 3600 + Minutes * 60 + Seconds;
      Days = totalSeconds / (24 * 3600);
      totalSeconds %= (24 * 3600);
      Hours = totalSeconds / 3600;
      totalSeconds %= 3600;
      Minutes = totalSeconds / 60;
      Seconds = totalSeconds % 60;
}
void CTimeSpan::Xuat(){
	  
	  cout<<Days<<"    | "<<Hours<<"   | "<<Minutes<<"   | "<<Seconds<<endl;
}

void CTimeSpan::Cong(CTimeSpan t2){
    cout<<"Sau khi cong t1 voi t2 "<<endl;
    Days += t2.Days;
    Hours += t2.Hours;
    Minutes += t2.Minutes;
    Seconds += t2.Seconds;
    cout<<"Ngay :"<<"|"<<"Gio :"<<"|"<<"Phut :"<<"|"<<"Giay :"<<endl;
    cout<<Days<<"    | "<<Hours<<"   | "<<Minutes<<"   | "<<Seconds<<endl;
}
void CTimeSpan::Tru(CTimeSpan t2){
    cout<<"Sau khi tru t1 voi t2 "<<endl;
    Days -= t2.Days;
    Hours -= t2.Hours;
    Minutes -= t2.Minutes;
    Seconds -= t2.Seconds;
    cout<<"Ngay :"<<"|"<<"Gio :"<<"|"<<"Phut :"<<"|"<<"Giay :"<<endl;
    cout<<Days<<"    | "<<Hours<<"   | "<<Minutes<<"   | "<<Seconds<<endl;
}
void CTimeSpan::Bang(CTimeSpan t2){
	if((Days==t2.Days)&&(Hours==t2.Hours)&&(Minutes==t2.Minutes)&&(Seconds==t2.Seconds)) cout<<"t1 bang t2 " <<endl;
}
void CTimeSpan::Khac(CTimeSpan t2){
	if((Days!=t2.Days)||(Hours!=t2.Hours)||(Minutes!=t2.Minutes)||(Seconds!=t2.Seconds)) cout<<"t1 khac t2 " <<endl;
}
void CTimeSpan::LonHon(CTimeSpan t2){
	if(ConVert()>t2.ConVert()) cout<<"t1 lon hon t2 " <<endl;
}
void CTimeSpan::BeHon(CTimeSpan t2){
	if(ConVert()<t2.ConVert()) cout<<"t1 be hon t2 " <<endl;
}
void CTimeSpan::LonHonhoacBang(CTimeSpan t2){
	if(ConVert()>=t2.ConVert()) cout<<"t1 lon hon hoac bang t2 " <<endl;
}
void CTimeSpan::BeHonhoacBang(CTimeSpan t2){
	if(ConVert()>=t2.ConVert()) cout<<"t1 be hon hoac bang t2 " <<endl;
}
