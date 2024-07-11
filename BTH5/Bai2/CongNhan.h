#ifndef CONGNHAN_H
#define CONGNHAN_H

#include "Nguoi.h"

class CongNhan : public Nguoi {
private:
    std::string job = "Cong Nhan";

public:
    void Nhap() override;
    void Xuat() override;
    CongNhan();
    ~CongNhan();
};

#endif  // CONGNHAN_H
