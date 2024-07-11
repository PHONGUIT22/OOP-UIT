#ifndef BO_H
#define BO_H

#include "GiaSuc.h"

class Bo : public GiaSuc {
public:
    Bo();

    void choSua() override;
    void sinhCon() override;
};

#endif  // BO_H
