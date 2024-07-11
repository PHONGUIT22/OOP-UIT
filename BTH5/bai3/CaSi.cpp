#include "Casi.h"
#include <iostream>

Casi::Casi() {}

Casi::~Casi() {}

void Casi::Nhap() {
    std::cin.ignore();
    std::getline(std::cin, ten);
    std::cin >> tuoi;
    std::cin >> luong;
}

void Casi::Xuat() {
    std::cout << "thong tin ca si :" << std::endl;
    std::cout << job << "-" << ten << "-" << tuoi << "-" << luong << std::endl;
}
