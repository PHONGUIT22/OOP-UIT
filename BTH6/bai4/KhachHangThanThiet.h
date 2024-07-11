#ifndef KHACHHANGTHANTHIET_H
#define KHACHHANGTHANTHIET_H

#include "KhachHang.h"

class KhachHangThanThiet : public KhachHang {
public:
    KhachHangThanThiet();
    ~KhachHangThanThiet();
    void Nhap();
    void Xuat();
    float SoTienPhaiTra();
};

#endif
