#ifndef LIST_H
#define LIST_H

#include "Nguoi.h"
#include <vector>

class List {
private:
    std::vector<Nguoi*> list;
public:
    List();
    ~List();
    void themdoituongnguoi(Nguoi* a);
    void xuatDS();
};

#endif  // LIST_H
