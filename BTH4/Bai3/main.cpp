#include<iostream>
#include<cmath>
#include"Bai3.h"
#include"Bai3.cpp"
using namespace std;
int main(){
    CTimeSpan obj1;
    CTimeSpan obj2;

    cin>>obj1;
    cout<<obj1<<endl;
    cin>>obj2;
    cout<<obj2<<endl;
    cout<<"Tong  :"<<endl;
    cout<<obj1+obj2<<endl;
    cout<<"Hieu :"<<endl;
    cout<<obj1-obj2<<endl;
    if(obj1==obj2) cout<<"Bang nhau"<<endl;
    else cout<<"Khac nhau"<<endl;
    if(obj1>obj2) cout<<"obj1 lon hon obj2"<<endl;
    else cout<<"obj1 be hon obj2"<<endl;
    return 0;
}
