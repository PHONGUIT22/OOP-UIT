#include <iostream>
#include <cstring> 
#include"Bai1.h"
#include"String.cpp"
using namespace std;
int main() {
    String s1;
    String s2;
    cout << "Nhap gia tri cho s1: ";
    cin >> s1;
    cout << "Nhap gia tri cho s2: ";
    cin >> s2;
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "Do dai s1: " << s1.length() << endl;
    cout << "Do dai s2: " << s2.length() << endl;
    cout << "Dao nguoc s1" << endl;
    s1.reverse();
    cout << "s1: " << s1 << endl;
    cout << "Dao nguoc s2" << endl;
    s2.reverse();
    cout << "s2: " << s2 << endl;
    cout<<"Nhap lua chon :"<<endl;
    int n;
    cin>>n;
    if(n==1){
       cout<<"Noi s2 vao s1 :"<<endl;
       s1.reverse();
       s2.reverse();
       s1.noichuoi(s2);
       cout<<"Chuoi sau khi noi: "<<s1<<endl;
    }
    else if(n==2){
       cout<<"Noi s1 vao s2 :"<<endl;
       s1.reverse();
       s2.reverse();
       s2.noichuoi(s1);
       cout<<"Chuoi sau khi noi: "<<s2<<endl;
    }
    return 0;
}
