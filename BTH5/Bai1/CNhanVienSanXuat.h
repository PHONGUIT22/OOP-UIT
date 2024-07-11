#ifndef CNHANVIENSANXUAT_H
#define CNHANVIENSANXUAT_H

#include "CNhanVien.h"

class CNhanVienSanXuat : public CNhanVien {
private:
    int SoNgayLamViec;

public:
    CNhanVienSanXuat();
    ~CNhanVienSanXuat();
    void Nhap() override;
    void Xuat() override;
    float getSalary() override;
};

#endif  // CNHANVIENSANXUAT_H
