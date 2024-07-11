#ifndef FILE_H
#define FILE_H
#include<iostream>
using namespace std;
class DaThuc{
	int n;
	float *a;
	public:
	void Nhap();
	void Xuat();
	void TinhDaThuc();
	void CongDaThuc(DaThuc obj2);
	void TruDaThuc(DaThuc obj2);
	DaThuc();
	~DaThuc(); 	
};
#endif
