#ifndef KHACHHANGDACBIET_H
#define KHACHHANGDACBIET_H

#include "KhachHang.h"

class KhachHangDacBiet : public KhachHang {
public:
    KhachHangDacBiet();
    ~KhachHangDacBiet();
    void Nhap();
    void Xuat();
    float SoTienPhaiTra();
};

#endif
