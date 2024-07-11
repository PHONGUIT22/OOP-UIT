#include "NgheSi.h"
#include <iostream>

NgheSi::NgheSi() {}

NgheSi::~NgheSi() {}

void NgheSi::Nhap() {
    std::cin.ignore();
    std::getline(std::cin, ten);
    std::cin >> tuoi;
    std::cin >> luong;
}

void NgheSi::Xuat() {
    std::cout << "thong tin Nghe si :" << std::endl;
    std::cout << job << "-" << ten << "-" << tuoi << "-" << luong << std::endl;
}
