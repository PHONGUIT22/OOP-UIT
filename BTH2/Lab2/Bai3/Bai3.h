#ifndef FILE_H
#define FILE_H
#include<iostream>
class CDate{
    int Ngay,Thang,Nam;
public:
    CDate(int Ngay=0, int Thang=0, int Nam=0){
        this->Ngay=Ngay;
        this->Thang=Thang;
        this->Nam=Nam;
    }
    void Nhap();
    void Xuat();
    void Cong(int s);
    void Tru(int s);
    void Them();
    void Bot();
    int KhoangCach(CDate a2);
    bool NamNhuan(int nam);
    int SoNgayTrongThang(int thang, int nam);
    bool NgayHopLe(int ngay, int thang, int nam);
};
#endif
