#include<iostream>
#include<cmath>
#include"Bai4.h"
#include"Bai4.cpp"
using namespace std;
int main(){
     CTime obj1;
     cin>>obj1;
     cout<<obj1<<endl;
     cout<<"Nhap khoang thoi gian can cong(s) :"<<endl;
     int Time;cin>>Time;
     cout<<"Sau khi cong mot khoang thoi gian :"<<endl;
     cout<<obj1+Time;
     cout<<"Sau khi tang 1 giay :"<<endl;
     cout<<++obj1<<endl;
     return 0;
}