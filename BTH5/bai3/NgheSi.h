#ifndef NGHESI_H
#define NGHESI_H

#include "Nguoi.h"

class NgheSi : public Nguoi {
private:
    std::string job = "Nghe si";
public:
    void Nhap() override;
    void Xuat() override;
    NgheSi();
    ~NgheSi();
};

#endif  // NGHESI_H
