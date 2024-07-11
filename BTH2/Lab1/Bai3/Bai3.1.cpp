#include<iostream>
#include<cmath>
#include<graphics.h>
using namespace std;
class DaGiac{
  struct Point{
		int x;
		int y;
		
	};
	int n;
    Point *P=new Point[n];
  public:
		DaGiac(){
	
	}
	int Get(){
		return n;
	}
    void Nhap();
    void Xuat();
    void TinhTien();
    void Quay();
    void PhongTo();
    void ThuNho();
    void Draw();
    ~DaGiac(){
	
	};
		
};
//Ham nhap da giac
void DaGiac::Nhap(){
	cout<<"Nhap so canh cua da giac "<<endl;
	cin>>n;
	if(n<3) cout<<"So canh khong hop le "<<endl;
	else if(n>=3) {
		
		for(int i=1;i<=n;i++){
			cout<<"Nhap hoanh do va tung do cua diem thu "<<i<<endl;
			cin>>P[i].x>>P[i].y;
		}
	}
}
//Ham xuat da giac
void DaGiac::Xuat(){
	if(n<3) {
		
	}
	else if(n>=3){
		for(int i=1;i<=n;i++){
		cout<<"Diem thu "<<i<<endl;
		cout<<"("<<P[i].x<<" , "<<P[i].y<<")"<<endl;
	 }
    }
}
//Ham Tinh tien da giac
void DaGiac::TinhTien(){
	   cout<<"Nhap diem can tinh tien "<<endl;
	   int c,d;
	   cin>>c>>d;
	   cout<<"Diem sau khi tinh tien :"<<endl;
	   for(int i=1;i<=n;i++){
		
		cout<<"("<<P[i].x+c<<" , "<<P[i].y+d<<")"<<endl;
       }  
	
}
//Ham quay da giac
void DaGiac::Quay() {
	double angle;
    int x0, y0;
    cout << "Nhap goc xoay theo do ";
    cin >> angle;
    cout << "Nhap toa do diem xoay ";
    cin >> x0 >> y0;

    // doi do sang radian
    angle = angle * M_PI / 180.0;

    for (int i = 1; i <= n; i++) {
        int x = P[i].x;
        int y = P[i].y;
        P[i].x = round((x - x0) * cos(angle) - (y - y0) * sin(angle) + x0);
        P[i].y = round((x - x0) * sin(angle) + (y - y0) * cos(angle) + y0);
    }
    cout<<"Da giac sau khi xoay la "<<endl;
    for(int i=1;i<=n;i++){
		
		cout<<"("<<P[i].x<<" , "<<P[i].y<<")"<<endl;
    }  
}
//Phong to da giac
void DaGiac::PhongTo(){
  
	int Phong;
	cout<<"Nhap he so phong to"<<endl;
	cin>>Phong;
	for (int i = 1; i <= n; i++) {
        cout<<"("<<P[i].x*Phong<<" , "<<P[i].y*Phong<<")"<<endl;
    }
}
//Thu nho da giac
void DaGiac::ThuNho(){
 
	int Thu;
	cout<<"Nhap he so thu nho"<<endl;
	cin>>Thu;
	for (int i = 1; i <= n; i++) {
        cout<<"("<<P[i].x/(1.0*Thu)<<" , "<<P[i].y/(1.0/Thu)<<")"<<endl;
    }
}
//ve da giac
void DaGiac::Draw(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setcolor(4);
    for (int i = 1; i < n; i++) {
        line(P[i].x,P[i].y,P[i+1].x,P[i+1].y);
    }
    line(P[n].x,P[n].y,P[1].x,P[1].y);
    getch();
}
int main(){
	DaGiac obj;
	obj.Nhap();
	obj.Xuat();
    if(obj.Get()<3){
    	
	}
	else if(obj.Get()>=3){
	  	cout<<"-----------Menu----------"<<endl;
	    cout<<"Nhap lua chon :"<<endl;
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
	    cout<<"-------------------------"<<endl;
	}
	obj.Draw();
	return 0;
}
