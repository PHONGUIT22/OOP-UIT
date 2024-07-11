#include "CNhanVienVanPhong.h"
#include <iostream>

CNhanVienVanPhong::CNhanVienVanPhong() {}

CNhanVienVanPhong::~CNhanVienVanPhong() {}

void CNhanVienVanPhong::Nhap() {
    std::cin.ignore();
    std::getline(std::cin, HoTen);
    std::getline(std::cin, NgaySinh);
    std::cin >> luongcanban;
    std::cin >> sosanpham;
    std::cin.ignore();
}

float CNhanVienVanPhong::getSalary() {
    return Luong = luongcanban + sosanpham * 5000;
}

void CNhanVienVanPhong::Xuat() {
    std::cout << "Ho Ten: " << HoTen << std::endl;
    std::cout << "Ngay Sinh: " << NgaySinh << std::endl;
    std::cout << "Luong: " << getSalary() << std::endl;
}
