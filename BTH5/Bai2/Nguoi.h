#ifndef NGUOI_H
#define NGUOI_H

#include <string>

class Nguoi {
protected:
    std::string ten;
    int tuoi;
    float luong;

public:
    Nguoi();
    virtual void Nhap() = 0;
    virtual void Xuat() = 0;
    virtual ~Nguoi();
};

#endif  // NGUOI_H
