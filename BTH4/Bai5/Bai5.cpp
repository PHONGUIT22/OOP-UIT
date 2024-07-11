#include <iostream>
#include <array>
using namespace std;
istream& operator>>(istream& is, CDate &a) {
    do {
        is >> a.ngay >> a.thang >> a.nam;
    } while (a.nam < 1 || a.thang < 1 || a.thang > 12 || a.ngay < 1 || a.ngay > a.getDaysInMonth(a.thang, a.nam));
    return is;
}

ostream& operator<<(ostream& os, const CDate a) {
    os << a.ngay << "/" << a.thang << "/" << a.nam << endl;
    return os;
}

CDate CDate::operator+(int time) {
    CDate result = *this;
    result.ngay += time;
    while (result.ngay > getDaysInMonth(result.thang, result.nam)) {
        result.ngay -= getDaysInMonth(result.thang, result.nam);
        result.thang++;
        if (result.thang > 12) {
            result.thang = 1;
            result.nam++;
        }
    }
    return result;
}

CDate CDate::operator-(int time) {
    CDate result = *this;
    result.ngay -= time;
    while (result.ngay < 1) {
        result.thang--;
        if (result.thang < 1) {
            result.thang = 12;
            result.nam--;
        }
        result.ngay += getDaysInMonth(result.thang, result.nam);
    }
    return result;
}

CDate& CDate::operator++() {
    *this = *this + 1;
    return *this;
}

CDate& CDate::operator--() {
    *this = *this - 1;
    return *this;
}

int CDate::operator-(const CDate &a) const {
    int days1 = nam * 365 + thang * 31 + ngay;
    int days2 = a.nam * 365 + a.thang * 31 + a.ngay;
    return days1 - days2;
}
