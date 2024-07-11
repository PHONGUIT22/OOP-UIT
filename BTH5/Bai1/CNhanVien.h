#ifndef CNHANVIEN_H
#define CNHANVIEN_H

#include <string>

class CNhanVien {
protected:
    std::string HoTen;
    std::string NgaySinh;
    float Luong;

public:
    virtual void Nhap() = 0;
    virtual void Xuat() = 0;
    virtual float getSalary() = 0;
};

#endif  // CNHANVIEN_H
