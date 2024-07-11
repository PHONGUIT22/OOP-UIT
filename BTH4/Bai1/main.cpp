#include<iostream>
#include<cmath>
#include"Bai1.h"
#include"Bai1.cpp"
int main(){
    SoPhuc obj1;
    SoPhuc obj2;
    cin>>obj1;
    cin>>obj2;
    cout<<obj1+obj2<<endl;
    cout<<obj1-obj2<<endl;
    cout<<obj1*obj2<<endl;
    cout<<obj1/obj2<<endl;
    if(obj1!=obj2) cout<< "so phuc 1 khac so phuc 2 "<<endl;
    if(obj1==obj2) cout<< "so phuc 1 bang so phuc 2 "<<endl;
    if(obj1>obj2) cout<<"so phuc 1 lon hon so phuc 2"<<endl;
    if(obj1<obj2) cout<<"so phuc 1 be hon so phuc 2"<<endl;
    if(obj1>=obj2) cout<<"so phuc 1 lon hon hoac bang so phuc 2"<<endl;
    if(obj1<=obj2) cout<<"so phuc 1 be hon hoac bang so phuc 2"<<endl;
    return 0;
}