#include "CongTy.h"
#include <iostream>

CongTy::CongTy() {}

CongTy::~CongTy() {
    for (CNhanVien* nhanVien : dsNhanVien) {
        delete nhanVien;
        nhanVien = nullptr;
    }
}

void CongTy::ThemNhanVien(CNhanVien* nhanVien) {
    dsNhanVien.push_back(nhanVien);
}

void CongTy::XuatDanhSachNhanVien() {
    std::cout << "Danh sach nhan vien:\n";
    for (CNhanVien* nhanVien : dsNhanVien) {
        nhanVien->Xuat();
        std::cout << std::endl;
    }
}
