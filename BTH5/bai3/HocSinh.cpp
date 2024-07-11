#include "HocSinh.h"
#include <iostream>

HocSinh::HocSinh() {}

HocSinh::~HocSinh() {}

void HocSinh::Nhap() {
    std::cin.ignore();
    std::getline(std::cin, ten);
    std::cin >> tuoi;
    std::cin >> luong;
}

void HocSinh::Xuat() {
    std::cout << "thong tin hoc sinh :" << std::endl;
    std::cout << job << "-" << ten << "-" << tuoi << "-" << luong << std::endl;
}
