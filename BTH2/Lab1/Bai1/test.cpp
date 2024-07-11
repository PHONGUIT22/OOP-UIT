#include<iostream>
#include<cmath>
#include<graphics.h>
#define PI 3.14159265
using namespace std;
class TamGiac{
    struct Point{
        int x;
        int y;
    };
    Point P1;
    Point P2;
    Point P3;
  public:
    TamGiac(){
	
	};
    void Nhap();
    void Xuat();
    void TinhTien();
    void Quay();
    void PhongTo();
    void ThuNho();
    void Draw();
    ~TamGiac(){
	
	};
};
//Ham nhap
void TamGiac::Nhap(){
    cout<<"Nhap hoanh do va tung do cua diem thu nhat "<<endl;
    cin>>P1.x>>P1.y;
    cout<<"Nhap hoanh do va tung do cua diem thu hai "<<endl;
    cin>>P2.x>>P2.y;
    cout<<"Nhap hoanh do va tung do cua diem thu ba "<<endl;
    cin>>P3.x>>P3.y;
}
//Ham Xuat
void TamGiac::Xuat(){
    cout<<"Diem thu nhat :"<<endl;
    cout<<P1.x<<" "<<P1.y<<endl;
    cout<<"Diem thu hai :"<<endl;
    cout<<P2.x<<" "<<P2.y<<endl;
    cout<<"Diem thu ba :"<<endl;
    cout<<P3.x<<" "<<P3.y<<endl;
}
// Ham Tinh Tien
void TamGiac::TinhTien(){
    Point T1, T2, T3;
    cout<<"Nhap hoanh do va tung do cua diem tinh tien thu nhat "<<endl;
    cin>>T1.x>>T1.y;
    cout<<"Nhap hoanh do va tung do cua diem tinh tien thu hai "<<endl;
    cin>>T2.x>>T2.y;
    cout<<"Nhap hoanh do va tung do cua diem tinh tien thu ba "<<endl;
    cin>>T3.x>>T3.y;
    cout<<"Cac diem cua tam giac sau khi tinh tien "<<endl;
    cout<<"("<<P1.x+T1.x<<" , "<<P1.y+T1.y<<")"<<" "<<"("<<P2.x+T2.x<<" , "<<P2.y+T2.y<<")"<<" "<<"("<<P3.x+T3.x<<" , "<<P3.y+T3.y<<")"<<endl;
}
//Ham quay tam giac
void TamGiac::Quay(){
    double angle;
    cout << "Nhap goc quay (theo do): ";
    cin >> angle;

    // Convert angle to radians
    angle = angle * PI / 180.0;

    // Calculate the centroid of the triangle
    double centroid_x = (P1.x + P2.x + P3.x) / 3.0;
    double centroid_y = (P1.y + P2.y + P3.y) / 3.0;

    // Translate points to origin
    P1.x -= centroid_x; P1.y -= centroid_y;
    P2.x -= centroid_x; P2.y -= centroid_y;
    P3.x -= centroid_x; P3.y -= centroid_y;

    // Perform rotation
    int temp_x, temp_y;
    temp_x = P1.x * cos(angle) - P1.y * sin(angle);
    temp_y = P1.x * sin(angle) + P1.y * cos(angle);
    P1.x = temp_x; P1.y = temp_y;

    temp_x = P2.x * cos(angle) - P2.y * sin(angle);
    temp_y = P2.x * sin(angle) + P2.y * cos(angle);
    P2.x = temp_x; P2.y = temp_y;

    temp_x = P3.x * cos(angle) - P3.y * sin(angle);
    temp_y = P3.x * sin(angle) + P3.y * cos(angle);
    P3.x = temp_x; P3.y = temp_y;

    // Translate points back
    P1.x += centroid_x; P1.y += centroid_y;
    P2.x += centroid_x; P2.y += centroid_y;
    P3.x += centroid_x; P3.y += centroid_y;
    cout<<"Tam giac sau khi tinh tien "<<endl;
    cout<<"("<<P1.x<<" , "<<P1.y<<")"<<" "<<"("<<P2.x<<" , "<<P2.y<<")"<<" "<<"("<<P3.x<<" , "<<P3.y<<")";
    cout<<endl;
}
//Ham phong to tam giac
void TamGiac::PhongTo(){
	int Phong;
	cout<<"Nhap he so phong :"<<endl;
	cin>>Phong;
	cout<<"Tam giac sau khi duoc phong to la :"<<endl;
	cout<<"("<<P1.x*Phong<<" , "<<P1.y*Phong<<")"<<" "<<"("<<P2.x*Phong<<" , "<<P2.y*Phong<<")"<<" "<<"("<<P3.x*Phong<<" , "<<P3.y*Phong<<")";
	cout<<endl;
}
//ham thu nho tam giac
void TamGiac::ThuNho(){
	int Thu;
	cout<<"Nhap he so thu :"<<endl;
	cin>>Thu;
	cout<<"Tam giac sau khi duoc phong to la :"<<endl;
	cout<<"("<<P1.x/(1.0*Thu)<<" , "<<P1.y/(1.0*Thu)<<")"<<" "<<"("<<P2.x/(1.0*Thu)<<" , "<<P2.y/(1.0*Thu)<<")"<<" "<<"("<<P3.x/(1.0*Thu)<<" , "<<P3.y/(1.0*Thu)<<")";
    cout<<endl;
}
//Ham ve tam giac
void Point::Draw(){
	int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setcolor(4);
    circle(P1.x, P1.y, 10);
    circle(P2.x, P2.y, 10);
    circle(P3.x, P3.y, 10);
    getch();
    closegraph();

}
int main(){
	TamGiac obj;
	obj.Nhap();
	obj.Xuat();
	cout<<"----------Menu----------"<<endl;
	cout<<"Chon chuc nang"<<endl;
	int lc;cin>>lc;
	if(lc==1){
		obj.TinhTien();
	}
	else if(lc==2){
	   obj.Quay();	
	}
	else if(lc==3){
		obj.PhongTo();
	}
	else if(lc==4){
		obj.ThuNho();
	}
	cout<<"------------------------"<<endl;
	return 0;
}
