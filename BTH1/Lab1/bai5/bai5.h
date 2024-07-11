#ifndef FILE_H
#define FILE_H
#include<iostream>
using namespace std;
class HS{
	  char HoTen[1000];
	  float diemtoan;
	  float diemvan;
	public:
	  void nhap();
	  float DTB(HS a);
};
void HS::nhap(){
    cout<<"Nhap Ho Ten"<<endl;
	cin.getline(HoTen,256);
    cout<<"Nhap diem toan"<<endl;
	cin>>diemtoan;
    cout<<"Nhap diem van"<<endl;
	cin>>diemvan;
}
float HS::DTB(HS a){
	return (a.diemtoan+a.diemvan)/2;
}
#endif