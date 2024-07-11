#include "CongTy.h"
#include "CNhanVienVanPhong.h"
#include "CNhanVienSanXuat.h"
#include "CongTy.cpp"
#include "CNhanVienVanPhong.cpp"
#include "CNhanVienSanXuat.cpp"
#include "CNhanVien.h"
#include <iostream>

int main() {
    CongTy congTy;

    int n;
    std::cout << "Nhap so luong nhan vien: ";
    std::cin >> n;

    std::cin.ignore();

    for (int i = 0; i < n; i++) {
        std::cout << "\nNhap thong tin nhan vien " << i + 1 << ":\n";
        std::cout << "1. Nhan vien van phong\n";
        std::cout << "2. Nhan vien san xuat\n";
        int choice;
        std::cout << "Chon loai nhan vien: ";
        std::cin >> choice;

        CNhanVien* nhanVien;

        switch (choice) {
            case 1:
                nhanVien = new CNhanVienVanPhong();
                break;
            case 2:
                nhanVien = new CNhanVienSanXuat();
                break;
            default:
                std::cout << "Lua chon khong hop le.\n";
                i--;
                continue;
        }

        nhanVien->Nhap();
        congTy.ThemNhanVien(nhanVien);
    }

    std::cout << "\n\n";
    congTy.XuatDanhSachNhanVien();

    return 0;
}
