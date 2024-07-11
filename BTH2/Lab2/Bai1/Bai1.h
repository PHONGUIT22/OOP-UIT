#ifndef FILE_H
#define FILE_H
#include<iostream>
using namespace std;
class CTimeSpan{
	   long long Seconds;//so giay
	   long long Minutes;//so phut
	   long long Hours;//so gio
	   long long Days;//so ngay
	public:
	   CTimeSpan(){
	   	
	   }
	   long long ConVert(){
	   	return Days*24*3600+Hours*3600+Minutes*60+Seconds;
	   }
	   void Nhap();
	   void Xuat();
	   void Cong(CTimeSpan t2);
	   void Tru(CTimeSpan t2);
	   void Bang(CTimeSpan t2);
	   void Khac(CTimeSpan t2);
	   void LonHon(CTimeSpan t2);
	   void BeHon(CTimeSpan t2);
	   void LonHonhoacBang(CTimeSpan t2);
	   void BeHonhoacBang(CTimeSpan t2);
	   ~CTimeSpan(){
	   	
	   }	
};
#endif
