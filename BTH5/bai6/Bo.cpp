#include "Bo.h"
#include <cstdlib>
#include <ctime>

Bo::Bo() : GiaSuc() {
    tiengKeu = "Bo";
}

void Bo::choSua() {
    srand(time(0));
    for (int i = 0; i < soLuong; i++) {
        soLitSua += rand() % 21; // Số lit sữa mỗi con bò cho là ngẫu nhiên từ 0 đến 20
    }
}

void Bo::sinhCon() {
    srand(time(0));
    for (int i = 0; i < soLuong; i++) {
        soCon += rand() % 3; // Số con mỗi con bò sinh là ngẫu nhiên từ 0 đến 2
    }
    soLuong += soCon;
}
