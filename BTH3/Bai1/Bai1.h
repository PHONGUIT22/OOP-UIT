#ifndef FILE_H
#define FILE_H
#include<iostream>
using namespace std;
class String { 
private:
    char *str; 
    int len; 
public:
    String() ;//Ham tao mac dinh
    
    String(const char *s);//Ham tao co tham so
    
    ~String() ;//Ham huy
    
    int length();//Tinh chieu dai
    
    void noichuoi(const String &s);//Noi chuoi
    
    void reverse();//Dao chuoi
    
    friend istream& operator>>(istream &is, String &s); // khai báo hàm bạn để nạp chồng toán tử >> cho nhập đối tượng String
    
    friend ostream& operator<<(ostream &os, const String &s); // khai báo hàm bạn để nạp chồng toán tử << cho xuất đối tượng String
};
#endif