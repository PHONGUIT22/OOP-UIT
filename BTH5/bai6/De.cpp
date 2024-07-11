#include "De.h"
#include <cstdlib>
#include <ctime>

De::De() : GiaSuc() {
    tiengKeu = "De";
}

void De::choSua() {
    srand(time(0));
    for (int i = 0; i < soLuong; i++) {
        soLitSua += rand() % 11; // Số lit sữa mỗi con dê cho là ngẫu nhiên từ 0 đến 10
    }
}

void De::sinhCon() {
    srand(time(0));
    for (int i = 0; i < soLuong; i++) {
        soCon += rand() % 5; // Số con mỗi con dê sinh là ngẫu nhiên từ 0 đến 4
    }
    soLuong += soCon;
}
