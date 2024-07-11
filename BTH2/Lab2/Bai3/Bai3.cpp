#include<iostream>
#include<cmath>
#include"Bai3.h"
#include"NgayThang.cpp"
using namespace std;



int main(){
   CDate a1(0,0,0);
   CDate a2(0,0,0);
   cout<<"Nhap ngay thang nam thu nhat "<<endl;
   a1.Nhap();
   cout<<"Nhap ngay thang nam thu hai "<<endl;
   a2.Nhap();
   a1.Xuat();
   a2.Xuat();
   cout<<"Khoang cach giua hai ngay la: "<<a1.KhoangCach(a2)<<endl;

   return 0;
}

