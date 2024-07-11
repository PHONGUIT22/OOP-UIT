#include "List.h"
#include <iostream>

List::List() {}

List::~List() {
    for (Nguoi* a : list) {
        delete a;
    }
}

void List::themdoituongnguoi(Nguoi* a) {
    list.push_back(a);
}

void List::xuatDS() {
    std::cout << "DANH SACH :" << std::endl;
    for (Nguoi* a : list) {
        a->Xuat();
    }
}


