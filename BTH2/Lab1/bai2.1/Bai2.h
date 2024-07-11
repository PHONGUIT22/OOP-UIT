#ifndef FILE_H
#define FILE_H
#include<iostream>
using namespace std;
class TamGiac{
    struct Point{
        int x;
        int y;
    };
    Point P1;
    Point P2;
    Point P3;
  public:
    TamGiac(){
	
	};
    void Nhap();
    void Xuat();
    void TinhTien();
    void Quay();
    void PhongTo();
    void ThuNho();
    void Draw();
    ~TamGiac(){
	
	};
};
#endif
