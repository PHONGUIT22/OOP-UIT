#include "Cuu.h"
#include <cstdlib>
#include <ctime>

Cuu::Cuu() : GiaSuc() {
    tiengKeu = "Cuu";
}

void Cuu::choSua() {
    srand(time(0));
    for (int i = 0; i < soLuong; i++) {
        soLitSua += rand() % 6; // Số lit sữa mỗi con cừu cho là ngẫu nhiên từ 0 đến 5
    }
}

void Cuu::sinhCon() {
    srand(time(0));
    for (int i = 0; i < soLuong; i++) {
        soCon += rand() % 4; // Số con mỗi con cừu sinh là ngẫu nhiên từ 0 đến 3
    }
    soLuong += soCon;
}
