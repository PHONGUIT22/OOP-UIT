#include "CNhanVienSanXuat.h"
#include <iostream>

CNhanVienSanXuat::CNhanVienSanXuat() {}

CNhanVienSanXuat::~CNhanVienSanXuat() {}

void CNhanVienSanXuat::Nhap() {
    std::cin.ignore();
    std::getline(std::cin, HoTen);
    std::getline(std::cin, NgaySinh);
    std::cin >> SoNgayLamViec;
    std::cin.ignore();
}

float CNhanVienSanXuat::getSalary() {
    return Luong = SoNgayLamViec * 100000;
}

void CNhanVienSanXuat::Xuat() {
    std::cout << "Ho Ten: " << HoTen << std::endl;
    std::cout << "Ngay Sinh: " << NgaySinh << std::endl;
    std::cout << "Luong: " << getSalary() << std::endl;
}
