#ifndef FILE_H
#define FILE_H
#include<iostream>
#include<cstring>
using namespace std;
class Candidate
{
private:
    string ma, ten, ngaysinh;
    float van, toan, anh;
 
public:
    Candidate(){};
    ~Candidate(){};
    void nhap();
    float tongdiem();
    void xuat();
    void tren15();
};

void Candidate::nhap()
{
    cout << "Nhap ma: ";
    cin.ignore();
    getline(cin,ma);
    cout << "Nhap ten: ";
    getline(cin, ten);
    cout << "Nhap ngay sinh: ";
    getline(cin, ngaysinh);
    cout << "Nhap van: ";
    cin >> van;
    cout << "Nhap toan: ";
    cin >> toan;
    cout << "Nhap anh: ";
    cin >> anh;
}

float Candidate::tongdiem()
{
    return van + toan + anh;
}
 
void Candidate::xuat()
{
    cout << ma << " - "<< ten << " - " << ngaysinh << " | " << van
        << " | " << toan << " | " << anh << endl;
}
void Candidate::tren15()
{
    if (Candidate::tongdiem() > 15)
        Candidate::xuat();
}
#endif