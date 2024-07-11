#ifndef CONGTY_H
#define CONGTY_H

#include "CNhanVien.h"
#include <vector>

class CongTy {
private:
    std::vector<CNhanVien*> dsNhanVien;

public:
    void ThemNhanVien(CNhanVien* nhanVien);
    void XuatDanhSachNhanVien();
    CongTy();
    ~CongTy();
};

#endif  // CONGTY_H
