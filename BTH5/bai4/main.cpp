#include<iostream>
#include<cmath>
#include<graphics.h>
using namespace std;
class Elip {
protected:
    double a;//ban kinh truc lon 
    double b; //Ban kinh truc nho

public:
	virtual void Nhap()=0;
    virtual void draw()=0;
};

class HinhTron : public Elip {
	private:
		int x,y;//Tam cua hinh tron
    public:
        void Nhap(){
        	cout<<"Nhap ban kinh hinh tron :"<<endl;
        	cin>>a;
        	b=a;//Ban kinh truc nho=truc lon
        	cout<<"Nhap tam hinh tron "<<endl;
        	cout<<"Nhap x: ";cin>>x;
        	cout<<"Nhap y: ";cin>>y;
		}

        void draw(){
           int gd = DETECT, gm;
           initgraph(&gd, &gm, "");
           settextstyle(DEFAULT_FONT, HORIZ_DIR, 2); 
           outtextxy(x-a, 0, "Hinh tron");
           circle(x,y,a);//ve hinh tron
           getch();
        }
};

int main() {
    HinhTron obj1;
    obj1.Nhap();
    obj1.draw();
    return 0;
}


