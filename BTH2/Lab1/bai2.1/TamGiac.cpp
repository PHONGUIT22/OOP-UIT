#include<iostream>
#include<cmath>
#include"Bai2.h"
#define PI 3.14159265
#include<graphics.h>
using namespace std;
void TamGiac::Nhap(){
    cout<<"Nhap hoanh do va tung do cua diem thu nhat "<<endl;
    cin>>P1.x>>P1.y;
    cout<<"Nhap hoanh do va tung do cua diem thu hai "<<endl;
    cin>>P2.x>>P2.y;
    cout<<"Nhap hoanh do va tung do cua diem thu ba "<<endl;
    cin>>P3.x>>P3.y;
}

void TamGiac::Xuat(){
    cout<<"Diem thu nhat :"<<endl;
    cout<<P1.x<<" "<<P1.y<<endl;
    cout<<"Diem thu hai :"<<endl;
    cout<<P2.x<<" "<<P2.y<<endl;
    cout<<"Diem thu ba :"<<endl;
    cout<<P3.x<<" "<<P3.y<<endl;
}

void TamGiac::TinhTien(){
    int c,d;
    cout<<"Nhap vector tinh tien "<<endl;
    cin>>c>>d;
    cout<<"Cac diem cua tam giac sau khi tinh tien "<<endl;
    cout<<"("<<P1.x+c<<" , "<<P1.y+d<<")"<<" "<<"("<<P2.x+c<<" , "<<P2.y+d<<")"<<" "<<"("<<P3.x+c<<" , "<<P3.y+d<<")"<<endl;
}

void TamGiac::Quay(){
    double angle;
    cout << "Nhap goc quay (theo do): ";
    cin >> angle;

    
    angle = angle * PI / 180.0;

    
    double centroid_x = (P1.x + P2.x + P3.x) / 3.0;
    double centroid_y = (P1.y + P2.y + P3.y) / 3.0;

    
    P1.x -= centroid_x; P1.y -= centroid_y;
    P2.x -= centroid_x; P2.y -= centroid_y;
    P3.x -= centroid_x; P3.y -= centroid_y;

    
    int temp_x, temp_y;
    temp_x = P1.x * cos(angle) - P1.y * sin(angle);
    temp_y = P1.x * sin(angle) + P1.y * cos(angle);
    P1.x = temp_x; P1.y = temp_y;

    temp_x = P2.x * cos(angle) - P2.y * sin(angle);
    temp_y = P2.x * sin(angle) + P2.y * cos(angle);
    P2.x = temp_x; P2.y = temp_y;

    temp_x = P3.x * cos(angle) - P3.y * sin(angle);
    temp_y = P3.x * sin(angle) + P3.y * cos(angle);
    P3.x = temp_x; P3.y = temp_y;

    
    P2.x += centroid_x; P2.y += centroid_y;
    P3.x += centroid_x; P3.y += centroid_y;
    cout<<"Tam giac sau khi tinh tien "<<endl;
    cout<<"("<<P1.x<<" , "<<P1.y<<")"<<" "<<"("<<P2.x<<" , "<<P2.y<<")"<<" "<<"("<<P3.x<<" , "<<P3.y<<")";
    cout<<endl;
}

void TamGiac::PhongTo(){
	int Phong;
	cout<<"Nhap he so phong :"<<endl;
	cin>>Phong;
	cout<<"Tam giac sau khi duoc phong to la :"<<endl;
	cout<<"("<<P1.x*Phong<<" , "<<P1.y*Phong<<")"<<" "<<"("<<P2.x*Phong<<" , "<<P2.y*Phong<<")"<<" "<<"("<<P3.x*Phong<<" , "<<P3.y*Phong<<")";
	cout<<endl;
}

void TamGiac::ThuNho(){
	int Thu;
	cout<<"Nhap he so thu :"<<endl;
	cin>>Thu;
	cout<<"Tam giac sau khi duoc phong to la :"<<endl;
	cout<<"("<<P1.x/(1.0*Thu)<<" , "<<P1.y/(1.0*Thu)<<")"<<" "<<"("<<P2.x/(1.0*Thu)<<" , "<<P2.y/(1.0*Thu)<<")"<<" "<<"("<<P3.x/(1.0*Thu)<<" , "<<P3.y/(1.0*Thu)<<")";
    cout<<endl;
}
