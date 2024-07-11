#ifndef FILE_H
#define FILE_H
#include<iostream>
using namespace std;
class CString{
    private:
       char* a;
    public:
       //Phuong thuc khoi tao mac dinh
        CString(){
          a= new char;
          a= nullptr;
        }
       //Phuong thuc khoi tao co doi so la mot chuoi ki tu
        CString(const char* str){
          int length = strlen(str);
          //Cap phat bo nho cho a va sao chep chuoi str vao a
          a= new char[length + 1];
          strcpy(a,str);
        }
        //Ham huy
        ~CString(){
            delete[] a;
            a=nullptr;
        }
        int Length() const; // Phuong thuc lay do dai chuoi
        const char*GetString() const;// Tra ve chuoi ky tu
        CString operator+(const CString& other) const;//Phep toan cong hai chuoi
        CString& operator=(const CString& other);//Phep toan gan chuoi
        bool operator==(const CString& other) const;//Phep toan so sanh hai chuoi(==)
        bool operator!=(const CString &other ) const;// Phep toan so sanh hai chuoi(!=)
    friend istream& operator>>(istream& is, CString &str);//dinh nghia>>
    friend ostream& operator<<(ostream& os, const CString &str);//dinh nghia<<
};

#endif