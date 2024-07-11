#include <cstring>
#include <iostream>
#include "Bai6.h"
#include "Bai6.cpp"
using namespace std;
int main() {
  CString str1,str2;
  cout << "Enter a string 1: ";
  cin >> str1; // Sử dụng toán tử >> để nhập chuỗi từ người dùng
  cout << "You entered: " << str1 << endl; // Sử dụng toán tử << để in chuỗi ra màn hình
  cout<<"Nhap string 2 :";
  cin>>str2;
  cout<<str2<<endl;
  cout<<(str1+str2);
  return 0;
}