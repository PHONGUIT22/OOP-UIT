#include<iostream>
#include<cmath>
#include"Bai4.h"

using namespace std;
DaThuc::DaThuc(){
    a=new float[n];
}
void DaThuc::Nhap(){
	
	cout<<"Nhap he so bac n"<<endl;
	cin>>n;
	a=new float[n];
	for(int i=0;i<=n;i++){
		cout<<"Nhap he so bac "<<i<<endl;
		cin>>a[i];
	}
}
void DaThuc::Xuat(){
	int local=n;//khai bao bien local
	while(local>=0){
		if(local>0){
			if(a[local]>0){
			  cout<<"+"<<a[local]<<"x^"<<local;
		    }
		    else if (a[n=local]==0) {
			  cout<<"+"<<0<<"x^"<<local;
		    }
		    else if (a[n]<0){
		    	cout<<a[n=local]<<"x^"<<local;
			}
		}
		else if(local==0){
			if(a[local]>0){
			  cout<<"+"<<a[local];
		    }
		    else if (a[local]==0) {
			  cout<<"+"<<0;
		    }
		    else if (a[local]<0){
		    	cout<<a[local];
			}
		}
		local--;
	}
	cout<<endl;
	
}

void DaThuc::TinhDaThuc(){
    int x;
    cout<<"x= ?"<<endl;
    cin>>x;
    float s=0;
    int local = n;
    while(local >= 0){
        s = s + (a[local] * pow(x,local));
        local--;
    }
    cout <<"Ket qua "<< s << endl;
}
void DaThuc::CongDaThuc(DaThuc obj2) {
    if (n == obj2.n) { //Neu 2 da thuc cung bac
        DaThuc result; //Tao da thuc luu tru ket qua
        result.n = n; //
        result.a = new float[n+1];
        for (int i = 0; i <= n; i++) {
            result.a[i] = a[i] + obj2.a[i];
        }
        result.Xuat(); //xuat da thuc ket qua
        delete []result.a; 
    } else { //Neu hai da thuc khac bac
        int max_n = max(n, obj2.n); //tim bac lon nhat
        float *a1 = new float[max_n+1];
        float *a2 = new float[max_n+1];
        for (int i = 0; i <= max_n; i++) {
            a1[i] = (i <= n) ? a[i] : 0; // gan cac he so cua mang 1 vao  a1
            a2[i] = (i <= obj2.n) ? obj2.a[i] : 0; // gan cac he so cua mang 2 vao  a2
        }
        DaThuc result;
        result.n = max_n;
        result.a = new float[max_n+1];
        for (int i = 0; i <= max_n; i++) {
            result.a[i] = a1[i] + a2[i];
        }
        result.Xuat(); // xuat 
        delete []a1; 
        delete []a2;
        delete []result.a;
    }
}
void DaThuc::TruDaThuc(DaThuc obj2) {
    if (n == obj2.n) { //Neu 2 da thuc cung bac
        DaThuc result; //Tao da thuc luu tru ket qua
        result.n = n; //
        result.a = new float[n+1];
        for (int i = 0; i <= n; i++) {
            result.a[i] = a[i] - obj2.a[i]; //Tru tung he so cua obj2 tuong ung voi he so cua obj1
        }
        result.Xuat(); //xuat da thuc ket qua
        delete []result.a; 
    } else { //Neu hai da thuc khac bac
        int max_n = max(n, obj2.n); //tim bac lon nhat
        float *a1 = new float[max_n+1];
        float *a2 = new float[max_n+1];
        for (int i = 0; i <= max_n; i++) {
            a1[i] = (i <= n) ? a[i] : 0; // gan cac he so cua mang 1 vao  a1
            a2[i] = (i <= obj2.n) ? obj2.a[i] : 0; // gan cac he so cua mang 2 vao  a2
        }
        
        DaThuc result; //Tao da thuc luu tru ket qua
        result.n = max_n;
        result.a = new float[max_n+1];
        for (int i = 0; i <= max_n; i++) {
            result.a[i] = a1[i] - a2[i]; //Tru tung he so cua obj2 tuong ung voi he so cua obj1
        }
        result.Xuat(); // xuat 
        delete []a1; 
        delete []a2;
        delete []result.a;
    }
}

DaThuc::~DaThuc(){
	delete []a;
};
