#include <iostream>
#include <cmath>
#include <graphics.h>
using namespace std;

class Shape {
protected:
    int x; // Toa do x goc trai tren
    int y; // Toa do y goc trai tren

public:
    virtual void Nhap() = 0;
    virtual void Ve() = 0;
};

class HinhThang : public Shape {
protected:
    int a; // Chieu dai day lon
    int b; // Chieu dai day nho
    int h; // Chieu cao

public:
    void Nhap() {
        cout << "Nhap toa do goc trai tren: " << endl;
        cout << "Nhap x: ";
        cin >> x;
        cout << "Nhap y: ";
        cin >> y;
        cout << "Nhap chieu dai day lon: ";
        cin >> a;
        cout << "Nhap chieu dai day nho: ";
        cin >> b;
        cout << "Nhap chieu cao: ";
        cin >> h;
    }

    void Ve() {
        int gd = DETECT, gm;
        initgraph(&gd, &gm, "");
        line(x, y, x + a, y); // Ve canh tren
        line(x, y, x + (a - b) / 2, y + h); // Ve canh trai
        line(x + a, y, x + (a + b) / 2, y + h); // Ve canh phai
        line(x + (a - b) / 2, y + h, x + (a + b) / 2, y + h); // Ve canh duoi
        getch();
    }
};

class HinhBinhHanh : public Shape {
protected:
    int a; // Chieu d�i ��y
    int h; // Chieu cao

public:
    void Nhap() {
        cout << "Nhap toa do goc trai tren: " << endl;
        cout << "Nhap x: ";
        cin >> x;
        cout << "Nhap y: ";
        cin >> y;
        cout << "Nhap chieu dai day: ";
        cin >> a;
        cout << "Nhap chieu cao: ";
        cin >> h;
    }

    void Ve() {
        int gd = DETECT, gm;
        initgraph(&gd, &gm, "");
        line(x, y, x + a, y); // Ve canh tren
        line(x + a, y, x + a - h, y + h); // Ve canh phai
        line(x, y, x - h, y + h); // Ve canh trai
        line(x - h, y + h, x + a - h, y + h); // Ve canh duoi
        getch();
    }
};

class HinhChuNhat : public Shape {
protected:
    int width; // Chieu rong
    int height; // Chieu cao

public:
    void Nhap() {
        cout << "Nhap toa do goc trai tren: " << endl;
        cout << "Nhap x: ";
        cin >> x;
        cout << "Nhap y: ";
        cin >> y;
        cout << "Nhap chieu rong: ";
        cin >> width;
        cout << "Nhap chieu cao: ";
        cin >> height;
    }

    void Ve() {
        int gd = DETECT, gm;
        initgraph(&gd, &gm, "");
        rectangle(x, y, x + width, y + height);
        getch();
    }
};

class HinhVuong : public HinhChuNhat {
public:
    void Nhap() {
        cout << "Nhap toa do goc trai tren: " << endl;
        cout << "Nhap x: ";
        cin >> x;
        cout << "Nhap y: ";
        cin >> y;
        cout << "Nhap do dai canh: ";
        cin >> width;
    }
    void Ve() {
        int gd = DETECT, gm;
        initgraph(&gd, &gm, "");
        rectangle(x, y, x + width, y + width);
        getch();
    }

};

int main() {
    Shape* shape;
    int choice;

    cout << "Chon hinh muon ve:" << endl;
    cout << "1. Hinh thang" << endl;
    cout << "2. Hinh binh hanh" << endl;
    cout << "3. Hinh chu nhat" << endl;
    cout << "4. Hinh vuong" << endl;
    cout << "Nhap lua chon: ";
    cin >> choice;

    switch (choice) {
        case 1:
            shape = new HinhThang();
            break;
        case 2:
            shape = new HinhBinhHanh();
            break;
        case 3:
            shape = new HinhChuNhat();
            break;
        case 4:
            shape = new HinhVuong();
            break;
        default:
            cout << "Lua chon khong hop le!" << endl;
            return 0;
    }

    shape->Nhap();
    shape->Ve();

    delete shape;

    return 0;
}

