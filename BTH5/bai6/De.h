#ifndef DE_H
#define DE_H

#include "GiaSuc.h"

class De : public GiaSuc {
public:
    De();

    void choSua() override;
    void sinhCon() override;
};

#endif  // DE_H
