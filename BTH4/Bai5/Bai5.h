#ifndef FILE_H
#define FILE_H
#include<iostream>
using namespace std;

class CDate {
private:
    int ngay;
    int thang;
    int nam;
    bool isLeapYear(int year) const {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
    int getDaysInMonth(int month, int year) const {
        static const array<int, 12> daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (month == 2 && isLeapYear(year)) {
            return 29;
        }
        return daysInMonth[month - 1];
    }

public:
    CDate()  {
        ngay=thang=nam=0;
        }
    CDate(int ngay, int thang, int nam){
        this->ngay=ngay;
        this->thang=thang;
        this->nam=nam;
    }

    friend istream& operator>>(istream& is, CDate &a);
    friend ostream& operator<<(ostream& os, const CDate a);

    CDate operator+(int time);
    CDate operator-(int time);
    CDate& operator++();
    CDate& operator--();
    int operator-(const CDate &a) const;
};
#endif