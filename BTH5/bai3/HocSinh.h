#ifndef HOCSINH_H
#define HOCSINH_H

#include "Nguoi.h"

class HocSinh : public Nguoi {
private:
    std::string job = "Hoc Sinh";
public:
    void Nhap() override;
    void Xuat() override;
    HocSinh();
    ~HocSinh();
};

#endif  // HOCSINH_H