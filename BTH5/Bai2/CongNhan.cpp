#include "CongNhan.h"
#include <iostream>

CongNhan::CongNhan() {}

CongNhan::~CongNhan() {}

void CongNhan::Nhap() {
    std::cin.ignore();
    std::getline(std::cin, ten);
    std::cin >> tuoi;
    std::cin >> luong;
}

void CongNhan::Xuat() {
    std::cout << "thong tin cong nhan :" << std::endl;
    std::cout << job << "-" << ten << "-" << tuoi << "-" << luong << std::endl;
}
