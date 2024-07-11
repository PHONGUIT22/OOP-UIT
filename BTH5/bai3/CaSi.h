#ifndef CASI_H
#define CASI_H

#include "Nguoi.h"

class Casi : public Nguoi {
private:
    std::string job = "ca si";
public:
    void Nhap() override;
    void Xuat() override;
    Casi();
    ~Casi();
};

#endif  // CASI_H

