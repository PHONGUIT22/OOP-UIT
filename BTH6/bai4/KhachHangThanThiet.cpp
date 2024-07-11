#include "KhachHangThanThiet.h"
#include <iostream>
#include <algorithm>

KhachHangThanThiet::KhachHangThanThiet() {
}

KhachHangThanThiet::~KhachHangThanThiet() {
}

void KhachHangThanThiet::Nhap() {
    std::cin.ignore();
    std::getline(std::cin, TenKhachHang);
    std::cin >> SoLuongHang;
    std::cin >> DonGiaHang;
    std::cin >> SoNamThanThiet;
}

float KhachHangThanThiet::SoTienPhaiTra() {
    return ((SoLuongHang * DonGiaHang) * (1 - std::max(SoNamThanThiet * 0.05f, 0.5f))) +
           ((SoLuongHang * DonGiaHang) * (1 - std::max(SoNamThanThiet * 0.05f, 0.5f)) * 0.1);
}

void KhachHangThanThiet::Xuat() {
    std::cout << TenKhachHang << std::endl;
    std::cout << SoTienPhaiTra() << std::endl;
}
