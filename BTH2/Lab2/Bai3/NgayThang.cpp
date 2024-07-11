#include<iostream>
#include<cmath>
#include"Bai3.h"
using namespace std;
bool CDate::NamNhuan(int nam){
    return ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0));
}

int CDate::SoNgayTrongThang(int thang, int nam){
    if(thang == 2){
        if(NamNhuan(nam)) return 29;
        else return 28;
    }
    else if(thang == 4 || thang == 6 || thang == 9 || thang == 11) return 30;
    else return 31;
}

bool CDate::NgayHopLe(int ngay, int thang, int nam){
    if(nam < 1) return false;
    if(thang < 1 || thang > 12) return false;
    if(ngay < 1 || ngay > SoNgayTrongThang(thang,nam)) return false;
    return true;
}

void CDate::Nhap(){
	
    cout<<"Nhap ngay :"<<endl;
    cin>>Ngay;
    cout<<"Nhap thang :"<<endl;
    cin>>Thang;
    cout<<"Nhap nam :"<<endl;
    cin>>Nam;

}
void CDate::Xuat(){
	if(Ngay)
    cout<<Ngay<<"/"<<Thang<<"/"<<Nam<<endl;
}
void CDate::Cong(int s){
    Ngay += s;
    while(!NgayHopLe(Ngay,Thang,Nam)){
        Ngay -= SoNgayTrongThang(Thang,Nam);
        Thang++;
        if(Thang > 12){
            Thang = 1;
            Nam++;
        }
    }
}
void CDate::Tru(int s){
    Ngay -= s;
    while(!NgayHopLe(Ngay,Thang,Nam)){
        Thang--;
        if(Thang < 1){
            Thang = 12;
            Nam--;
        }
        Ngay += SoNgayTrongThang(Thang,Nam);
    }
}
void CDate::Them(){
   Cong(1);
}
void CDate::Bot(){
   Tru(1);
}
int CDate::KhoangCach(CDate a2){
   CDate temp = *this; 
   int count = 0; 
   while(temp.Ngay != a2.Ngay || temp.Thang != a2.Thang || temp.Nam != a2.Nam){ 
      temp.Bot(); 
      count++; 
   } 
   return count; 
}

