#ifndef CNHANVIENVANPHONG_H
#define CNHANVIENVANPHONG_H

#include "CNhanVien.h"

class CNhanVienVanPhong : public CNhanVien {
private:
    float luongcanban;
    float sosanpham;

public:
    CNhanVienVanPhong();
    ~CNhanVienVanPhong();
    void Nhap() override;
    void Xuat() override;
    float getSalary() override;
};

#endif  // CNHANVIENVANPHONG_H
