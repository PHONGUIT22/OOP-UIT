#include<iostream>
#include<cstring>
using namespace std;
String::String(){ 
        str = NULL; 
        len = 0; 
}
String::String(const char *s){
        len = strlen(s); 
        str = new char[len + 1]; 
        strcpy(str, s); 
}
String::~String(){
     delete[] str; 
        str=NULL; 
}
int String::length(){
     return len; 
}
void String::noichuoi(const String &s){//Noi hai chuoi
    char *temp = new char[len + s.len + 1]; // cấp phát bộ nhớ cho một mảng ký tự tạm thời
        strcpy(temp, str); // sao chép str vào temp
        strcat(temp, s.str); // nối s.str vào temp
        delete[] str; // giải phóng bộ nhớ cho str
        str = temp; // gán str trỏ đến temp
        len += s.len; // cập nhật độ dài của chuỗi
}
void String::reverse(){
        for (int i = 0; i < len / 2; i++) { 
            swap(str[i], str[len - i - 1]); 
        }
}
istream& operator>>(istream &is, String &s) { 
    char temp[1000]; 
    is >> temp; 
    s.len = strlen(temp);
    s.str = new char[s.len + 1];
    strcpy(s.str, temp);
    return is;
}
ostream& operator<<(ostream &os, const String &s) { 
    os << s.str;
    return os;
}