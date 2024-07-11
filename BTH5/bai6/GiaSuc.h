#ifndef GIASUC_H
#define GIASUC_H

#include <string>

class GiaSuc {
protected:
    int soLuong;
    int soLitSua;
    int soCon;
    std::string tiengKeu;

public:
    GiaSuc();
    ~GiaSuc();
    virtual void nhapSoLuong();
    virtual void keu();
    virtual void choSua();
    virtual void sinhCon();

    int getSoLuong();
    int getSoLitSua();
    int getSoCon();
};

#endif  // GIASUC_H
