#include <cstring>
#include <iostream>
using namespace std;

istream& operator>>(istream& is,CString& str){
     char buffer[100];
     is>>buffer;
     //Giai phong bo nho
     delete[] str.a;
     int length = strlen(buffer);
     str.a = new char[length +1];
     strcpy(str.a, buffer);
     
     
     return is;
}
ostream& operator<<(ostream& os, const CString &str){
     os<<str.a;
     return os;
}
int CString::Length() const{
  return strlen(a);
}
const char* CString:: GetString() const{
  return a;
}
CString CString:: operator+(const CString& other ) const{
    int length1= Length();
    int length2= other.Length();
    int totalLength = length1 + length2; 

    //Cap phat bo nho cho chuoi ket qua
    char* result = new char[totalLength+ 1];

    //Sao chep cac ky tu cua chuoi goc vao chuoi ket qua
     strcpy(result,a);
     strcat(result, other.GetString());
     //Tao mot doi tuong CString moi voi 1 chuoi da tra ve
     CString newString(result);
     delete[] result;
     return newString;
}
CString& CString::operator=(const CString& other){
  if(this != &other){
      delete[] a;
      //Tinh do dai cua chuoi other
      int length= other.Length();
      //Cap phat bo nho moi va sao chep chuoi other vao a
      a= new char[length +1 ];
      strcpy(a,other.GetString());
  }
  return *this;
}
bool CString::operator==(const CString& other) const{
  return strcmp(a,other.GetString()) == 0;
}
bool CString::operator!=(const CString& other) const{
  return strcmp(a, other.GetString()) !=0;
}
