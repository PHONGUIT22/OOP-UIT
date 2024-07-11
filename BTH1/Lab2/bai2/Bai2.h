#ifndef FILE_H
#define FILE_H
#include<iostream>
using namespace std;

class SoPhuc{
	  float thuc,ao;
	public:
	  SoPhuc(){};
	  ~SoPhuc(){};
	  void nhap();
	  void cong(SoPhuc b);
	  void tru(SoPhuc b);
	  void nhan(SoPhuc b);
	  void chia(SoPhuc b);
};
void SoPhuc::nhap(){
	cin>>thuc>>ao;
}
//cong
void SoPhuc:: cong(SoPhuc b){
	if(ao+b.ao>0) cout<<thuc+b.thuc<<"+"<<ao+b.ao<<"i";
	else cout<<thuc+b.thuc<<ao+b.ao<<"i";
}

//tru
void SoPhuc:: tru(SoPhuc b){
	if(ao-b.ao>=0) cout<<thuc-b.thuc<<"+"<<ao-b.ao<<"i";
	else cout<<thuc-b.thuc<<ao-b.ao<<"i";
}
//nhan
void SoPhuc::nhan(SoPhuc b){
	if((thuc*b.ao+ao*b.thuc)>0) cout<<thuc*b.thuc-ao*b.ao<<"+"<<thuc*b.ao+ao*b.thuc<<"i";
	else cout<<thuc*b.thuc-ao*b.ao<<"-"<<thuc*b.ao+ao*b.thuc<<"i";
}

//chia
void SoPhuc::chia(SoPhuc b){
if(((b.thuc*ao-thuc*b.ao)/(pow(b.thuc,2)))>0)
     cout<<(thuc*b.thuc+ao*b.ao)/(pow(b.thuc,2)+pow(b.ao,2))
                <<"+"<<(b.thuc*ao-thuc*b.ao)/(pow(b.thuc,2)+pow(b.ao,2))<<"i";
else cout<<(thuc*b.thuc+ao*b.ao)/(pow(b.thuc,2)+pow(b.ao,2))
                <<(b.thuc*ao-thuc*b.ao)/(pow(b.thuc,2)+pow(b.ao,2))<<"i";
}

#endif