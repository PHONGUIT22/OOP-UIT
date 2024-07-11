    // CongTy(const CongTy& other) {
    //     for (CNhanVien* nhanVien : other.dsNhanVien) {
    //         if (dynamic_cast<CNhanVienVanPhong*>(nhanVien)) {
    //             CNhanVienVanPhong* newNhanVien = new CNhanVienVanPhong();
    //             *newNhanVien = *dynamic_cast<CNhanVienVanPhong*>(nhanVien);
    //             dsNhanVien.push_back(newNhanVien);
    //         } else if (dynamic_cast<CNhanVienSanXuat*>(nhanVien)) {
    //             CNhanVienSanXuat* newNhanVien = new CNhanVienSanXuat();
    //             *newNhanVien = *dynamic_cast<CNhanVienSanXuat*>(nhanVien);
    //             dsNhanVien.push_back(newNhanVien);
    //         }
    //     }
    // }