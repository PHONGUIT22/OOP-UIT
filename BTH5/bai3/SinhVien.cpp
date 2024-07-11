#include "SinhVien.h"
#include <iostream>

SinhVien::SinhVien() {}

SinhVien::~SinhVien() {}

void SinhVien::Nhap() {
    std::cin.ignore();
    std::getline(std::cin, ten);
    std::cin >> tuoi;
    std::cin >> luong;
}

void SinhVien::Xuat() {
    std::cout << "thong tin sinh vien :" << std::endl;
    std::cout << job << "-" << ten << "-" << tuoi << "-" << luong << std::endl;
}


