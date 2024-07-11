#include "KhachHangBinhThuong.h"
#include <iostream>

KhachHangBinhThuong::KhachHangBinhThuong() {
}

KhachHangBinhThuong::~KhachHangBinhThuong() {
}

void KhachHangBinhThuong::Nhap() {
    std::cin.ignore();
    std::getline(std::cin, TenKhachHang);
    std::cin >> SoLuongHang;
    std::cin >> DonGiaHang;
}

float KhachHangBinhThuong::SoTienPhaiTra() {
    return SoLuongHang * DonGiaHang + (SoLuongHang * DonGiaHang * 0.1);
}

void KhachHangBinhThuong::Xuat() {
    std::cout << TenKhachHang << std::endl;
    std::cout << SoTienPhaiTra() << std::endl;
}
