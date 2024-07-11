#include "Nguoi.h"
#include "SinhVien.h"
#include "HocSinh.h"
#include "CongNhan.h"
#include "NgheSi.h"
#include "Casi.h"
#include "Nguoi.cpp"
#include "SinhVien.cpp"
#include "HocSinh.cpp"
#include "CongNhan.cpp"
#include "NgheSi.cpp"
#include "Casi.cpp"
#include <iostream>

int main() {
    Nguoi* obj1;
    int choice;  // lua chon
    std::cout << "Chon doi tuong nguoi (1:sinh vien, 2:hoc sinh, 3:cong nhan, 4:nghe si, 5:ca si)" << std::endl;
    std::cin >> choice;
    switch (choice) {
        case 1:
            obj1 = new SinhVien();
            break;
        case 2:
            obj1 = new HocSinh();
            break;
        case 3:
            obj1 = new CongNhan();
            break;
        case 4:
            obj1 = new NgheSi();
            break;
        case 5:
            obj1 = new Casi();
            break;
    }
    obj1->Nhap();
    obj1->Xuat();

    // Giai phong bo nho
    delete obj1;
    obj1 = nullptr;
    return 0;
}