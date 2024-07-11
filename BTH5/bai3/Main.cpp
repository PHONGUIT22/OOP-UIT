#include "List.h"
#include "SinhVien.h"
#include "HocSinh.h"
#include "CongNhan.h"
#include "NgheSi.h"
#include "Casi.h"
#include "Nguoi.h"
#include "List.cpp"
#include "SinhVien.cpp"
#include "HocSinh.cpp"
#include "CongNhan.cpp"
#include "NgheSi.cpp"
#include "Casi.cpp"
#include "Nguoi.cpp"
#include <iostream>

int main() {
    List list;
    Nguoi* obj1;
    std::cout<<"Chon so nguoi can nhap :"<<std::endl;
    int n;  // so luong nguoi can nhap
    std::cin >> n;
    std::cin.ignore();
    for (int i = 0; i < n; i++) {
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
            default:
                std::cout << "Khong hop le, chon lai" << std::endl;
                i--;
                continue;
        }
        obj1->Nhap();
        list.themdoituongnguoi(obj1);
    }
    list.xuatDS();
    return 0;
}

