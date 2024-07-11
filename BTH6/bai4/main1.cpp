#include <iostream>
#include <vector>
#include<cmath>
#include<string>
#include "KhachHang.h"
#include "KhachHang.cpp"
#include "KhachHangBinhThuong.h"
#include "KhachHangThanThiet.h"
#include "KhachHangDacBiet.h"
#include "KhachHangBinhThuong.cpp"
#include "KhachHangThanThiet.cpp"
#include "KhachHangDacBiet.cpp"

int main(){
    int x,y,z;
    std::cin>>x>>y>>z;
    std::vector<KhachHangBinhThuong*> a(x);
    std::vector<KhachHangThanThiet*> b(y);
    std::vector<KhachHangDacBiet*> c(z);
    float TongSoTien=0;
    std::cout<<x<<" "<<y<<" "<<z<<std::endl;
    //Nhap xuat khach hang binh thuong
    for(int i=0;i<x;i++){
        a[i] = new KhachHangBinhThuong();
        a[i]->Nhap();
    }
    for(int i=0;i<x;i++){
        if(i<x-1){
            a[i]->Xuat();
            TongSoTien+=a[i]->SoTienPhaiTra();
            std::cout<<"............................"<<std::endl;
        }
        else {
            a[i]->Xuat();
            TongSoTien+=a[i]->SoTienPhaiTra();
            std::cout<<std::endl;
        }
    }
    
    //Nhap xuat khach hang than thiet
    for(int i=0;i<y;i++){
        b[i] = new KhachHangThanThiet();
        b[i]->Nhap();
    }
    for(int i=0;i<y;i++){
        if(i<y-1){
            b[i]->Xuat();
            TongSoTien+=b[i]->SoTienPhaiTra();
            std::cout<<"............................"<<std::endl;
        }
        else {
            b[i]->Xuat();
            TongSoTien+=b[i]->SoTienPhaiTra();
            std::cout<<std::endl;
        }
        
    }

    //Nhap xuat khach hang dac biet
    for(int i=0;i<z;i++){
        c[i] = new KhachHangDacBiet();
        c[i]->Nhap();
    }
    for(int i=0;i<z;i++){
        if(i<z-1){
            c[i]->Xuat();
            TongSoTien+=c[i]->SoTienPhaiTra();
            std::cout<<"............................"<<std::endl;
        }
        else {
            c[i]->Xuat();
            TongSoTien+=c[i]->SoTienPhaiTra();
            std::cout<<std::endl;
        }
        
    }
    

   //Tinh tong so tien
    std::cout<<"Tong so tien cua cong ty "<<TongSoTien<<std::endl;

    //Huy vung nho cua 3 vector
    for(int i=0;i<x;i++){
        delete[] a[i];
        a[i]=nullptr;
    }
     for(int i=0;i<x;i++){
        delete[] b[i];
        b[i]=nullptr;
    }
     for(int i=0;i<x;i++){
        delete[] c[i];
        c[i]=nullptr;
    }
    return 0;
}
