#ifndef KHACHHANGBINHTHUONG_H
#define KHACHHANGBINHTHUONG_H

#include "KhachHang.h"

class KhachHangBinhThuong : public KhachHang {
public:
    KhachHangBinhThuong();
    ~KhachHangBinhThuong();
    void Nhap();
    float SoTienPhaiTra();
    void Xuat();
};

#endif
