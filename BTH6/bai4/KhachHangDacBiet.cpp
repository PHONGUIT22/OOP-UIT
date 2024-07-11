#include "KhachHangDacBiet.h"
#include <iostream>

KhachHangDacBiet::KhachHangDacBiet() {
}

KhachHangDacBiet::~KhachHangDacBiet() {
}

void KhachHangDacBiet::Nhap() {
    std::cin.ignore();
    std::getline(std::cin, TenKhachHang);
    std::cin >> SoLuongHang;
    std::cin >> DonGiaHang;
}

float KhachHangDacBiet::SoTienPhaiTra() {
    return ((SoLuongHang * DonGiaHang) * 0.5f) + ((SoLuongHang * DonGiaHang) * 0.5f * 0.1);
}

void KhachHangDacBiet::Xuat() {
    std::cout << TenKhachHang << std::endl;
    std::cout << SoTienPhaiTra() << std::endl;
}
