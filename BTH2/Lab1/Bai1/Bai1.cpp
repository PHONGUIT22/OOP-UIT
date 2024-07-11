// Example code for drawing a red point with a radius of 5 pixels in graphics in C++
#include <graphics.h>
#include <iostream>
using namespace std;
class Point{
	double x;
	double y;
  public:
  	void Nhap();
  	void Xuat();
  	void TinhTien();
  	void Draw();
};
void Point::Nhap(){
	cout<<"Nhap hoanh do :";cin>>x;
	cout<<"Nhap tung do :";cin>>y;
}
void Point::Xuat(){
	cout<<"Hoanh do :"<<x<<endl;
	cout<<"Tung do :"<<y<<endl;
}
void Point::TinhTien(){
	int c,d;
	cout<<"Nhap hoanh do tinh tien :"<<endl;
	cin>>c>>d;
	cout<<"Diem sau khi tinh tien :"<<endl;
	cout<<x+c<<" "<<y+d<<endl;
}
void Point::Draw(){
	int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setcolor(4);
    circle(x, y, 10);
    getch();
    closegraph();

}


int main()
{
    Point obj;
    obj.Nhap();
    obj.Xuat();
    obj.TinhTien();
    obj.Draw();
    return 0;
    
}
