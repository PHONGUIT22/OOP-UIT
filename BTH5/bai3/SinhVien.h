#ifndef SINHVIEN_H
#define SINHVIEN_H

#include "Nguoi.h"

class SinhVien : public Nguoi {
private:
    std::string job = "Sinh Vien";
public:
    void Nhap() override;
    void Xuat() override;
    SinhVien();
    ~SinhVien();
};

#endif  // SINHVIEN_H
