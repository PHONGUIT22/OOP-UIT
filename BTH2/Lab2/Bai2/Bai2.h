#ifndef FILE_H
#define FILE_H
#include<iostream>
class CTimSpan {
    int Seconds;
public:
    CTimSpan(int Seconds) {
        this->Seconds = Seconds;
    }
    void Xuat();
};
class CTime{
	  int Hours=0,Minutes=0,Seconds=0;
	public:
	  CTime(int Hours,int Minutes,int Seconds){
	  	 this->Hours=Hours;
	  	 this->Minutes=Minutes;
	  	 this->Seconds=Seconds;
	  }
	  void Nhap();
	  void Xuat();
	  void Cong();//cong them mot so nguyen giay
	  void Tru();//tru them mot so nguyen giay
	  void Tang();
	  void Bot();
	  CTimSpan Tru(CTime Time2);
	  ~CTime(){
	  }	
};
#endif
