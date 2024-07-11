#ifndef KHACHHANG_H
#define KHACHHANG_H

#include <string>

class KhachHang {
protected:
    std::string TenKhachHang;
    float SoLuongHang;
    float DonGiaHang;
    float SoNamThanThiet;

public:
    KhachHang();
    virtual ~KhachHang();
    virtual void Nhap() = 0;
    virtual void Xuat() = 0;
    virtual float SoTienPhaiTra() = 0;
};

#endif
