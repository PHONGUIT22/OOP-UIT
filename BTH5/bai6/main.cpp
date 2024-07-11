#include "Bo.h"
#include "Cuu.h"
#include "De.h"
#include "Bo.cpp"
#include "Cuu.cpp"
#include "De.cpp"
#include"GiaSuc.h"
#include"GiaSuc.cpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
int main() {
    Bo bo;
    Cuu cuu;
    De de;

    std::cout << "Nhap so luong bo: " << std::endl;
    bo.nhapSoLuong();

    std::cout << "Nhap so luong cuu: " << std::endl;
    cuu.nhapSoLuong();

    std::cout << "Nhap so luong de: " << std::endl;
    de.nhapSoLuong();

    std::cout << std::endl
              << "Tieng keu cua tat ca gia suc trong nong trai khi doi: " << std::endl;
    bo.keu();
    cuu.keu();
    de.keu();

    bo.sinhCon();
    cuu.sinhCon();
    de.sinhCon();

    bo.choSua();
    cuu.choSua();
    de.choSua();

    std::cout << std::endl
              << "Thong ke sau mot lua sinh va mot luot cho sua: " << std::endl;
    std::cout << "So luong bo: " << bo.getSoLuong() << std::endl;
    std::cout << "So luong cuu: " << cuu.getSoLuong() << std::endl;
    std::cout << "So luong de: " << de.getSoLuong() << std::endl;
    std::cout << "Tong so lit sua: " << bo.getSoLitSua() + cuu.getSoLitSua() + de.getSoLitSua() << std::endl;

    return 0;
}


