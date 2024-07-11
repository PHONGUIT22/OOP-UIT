#include "GiaSuc.h"
#include <iostream>

GiaSuc::GiaSuc() {
    soLuong = 0;
    soLitSua = 0;
    soCon = 0;
}
GiaSuc::~GiaSuc(){
    
}
void GiaSuc::nhapSoLuong() {
    std::cout << "Nhap so luong: ";
    std::cin >> soLuong;
}

void GiaSuc::keu() {
    for (int i = 0; i < soLuong; i++) {
        std::cout << tiengKeu << " ";
    }
    std::cout << std::endl;
}

void GiaSuc::choSua() {
    // Số lượng sữa mỗi con cho là ngẫu nhiên
}

void GiaSuc::sinhCon() {
    // Số lượng con mỗi con sinh là ngẫu nhiên
}

int GiaSuc::getSoLuong() {
    return soLuong;
}

int GiaSuc::getSoLitSua() {
    return soLitSua;
}

int GiaSuc::getSoCon() {
    return soCon;
}
