#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;
//CLASS CHA
class SinhVien{
    protected:
      string MaSoSV;
      string HoTen;
      string DiaChi;
      int tongsoTC;
      float DTB;
      float DiemThiTotNghiep;
      float DiemLuanVan;
    public:
      SinhVien();
      ~SinhVien();
      virtual void Nhap()=0;
      virtual void Xuat()=0;
      virtual int getTongSoTC()=0;
      virtual float getDTB()=0;
      virtual float getDiemThiTotNghiep();
      virtual float getDiemLuanVan();
};
SinhVien::SinhVien(){

}
SinhVien::~SinhVien(){

}
 float SinhVien::getDiemThiTotNghiep(){
    return DiemThiTotNghiep;
}
 float SinhVien::getDiemLuanVan(){
    return DiemLuanVan;
}
//CLASS CON
class SinhVienCaoDang : public SinhVien{
    public:
       SinhVienCaoDang();
       ~SinhVienCaoDang();
       void Nhap();
       void Xuat();
       int getTongSoTC();
       float getDTB();
       float getDiemThiTotNghiep();
}; 

SinhVienCaoDang::SinhVienCaoDang(){

}
SinhVienCaoDang::~SinhVienCaoDang(){

}
void SinhVienCaoDang::Nhap(){
    cout<<"Nhap thong tin sinh vien cao dang :"<<endl;
    cout<<"Nhap MSSV "<<endl;
    cin.ignore();
    getline(cin,MaSoSV);
    cout<<"Nhap Ho Ten :"<<endl;
    // cin.ignore();
    getline(cin,HoTen);
    cout<<"Nhap dia chi sinh vien :"<<endl;
    // cin.ignore();
    getline(cin,DiaChi);
    cout<<"Nhap so tin chi cua sinh vien "<<endl;
    cin>>tongsoTC;
    cout<<"Nhap diem TB cua sinh vien "<<endl;
    cin>>DTB;
    cout<<"Nhap diem thi tot nghiep "<<endl;
    cin>>DiemThiTotNghiep;
}

void SinhVienCaoDang::Xuat(){

   cout<<"Thong Tin Sinh Vien :"<<endl;
   cout<<"MSSV : "<<MaSoSV<<endl;
   cout<<"Ho ten sinh vien : "<<HoTen<<endl;
   cout<<"Dia Chi : "<<DiaChi<<endl;
   cout<<"Tong tin chi : "<<tongsoTC<<endl;
   cout<<"Diem trung binh : "<<DTB<<endl;
   cout<<"Diem tot nghiep : "<<DiemThiTotNghiep<<endl;

}

int SinhVienCaoDang::getTongSoTC(){
    return tongsoTC;
}
float SinhVienCaoDang::getDTB(){
    return DTB;
}
float SinhVienCaoDang::getDiemThiTotNghiep(){
    return DiemThiTotNghiep;
}

// CLASS CON
class SinhVienDaiHoc : public SinhVien{
    private:
       string TenLuanVan;
    public:
       SinhVienDaiHoc();
       ~SinhVienDaiHoc();
       void Nhap();
       void Xuat();
       int getTongSoTC();
       float getDTB();
       float getDiemLuanVan();
}; 

SinhVienDaiHoc::SinhVienDaiHoc(){

}
SinhVienDaiHoc::~SinhVienDaiHoc(){

}
void SinhVienDaiHoc::Nhap(){
    cout<<"Nhap thong tin sinh vien dai hoc :"<<endl;
    cout<<"Nhap MSSV "<<endl;
    cin.ignore();
    getline(cin,MaSoSV);
    cout<<"Nhap Ho Ten :"<<endl;
    // cin.ignore();
    getline(cin,HoTen);
    cout<<"Nhap dia chi sinh vien :"<<endl;
    // cin.ignore();
    getline(cin,DiaChi);
    cout<<"Nhap so tin chi cua sinh vien "<<endl;
    cin>>tongsoTC;
    cout<<"Nhap diem TB cua sinh vien "<<endl;
    cin>>DTB;
    cout<<"Nhap Ten luan van :"<<endl;
    cin.ignore();
    getline(cin,TenLuanVan);
    cout<<"Nhap diem thi luan van"<<endl;
    cin>>DiemLuanVan;
}

void SinhVienDaiHoc::Xuat(){

   cout<<"Thong Tin Sinh Vien :"<<endl;
   cout<<"MSSV : "<<MaSoSV<<endl;
   cout<<"Ho ten sinh vien : "<<HoTen<<endl;
   cout<<"Dia Chi : "<<DiaChi<<endl;
   cout<<"Tong tin chi : "<<tongsoTC<<endl;
   cout<<"Diem trung binh : "<<DTB<<endl;
   cout<<"Ten luan van :"<<TenLuanVan<<endl;
   cout<<"Diem luan van : "<<DiemLuanVan<<endl;

}
int SinhVienDaiHoc::getTongSoTC(){
    return tongsoTC;
}
float SinhVienDaiHoc::getDTB(){
    return DTB;
}
float SinhVienDaiHoc::getDiemLuanVan(){
    return DiemLuanVan;
}

//DS Sinh Vien Cao Dang dung 1 class de quan ly
class DanhSachSinhVienCaoDang{
    private:
      vector<SinhVien*> ListCaoDang;
      int SoSVKhongTotNghiep=0;
    public:
      DanhSachSinhVienCaoDang();
      ~DanhSachSinhVienCaoDang();
      void ThemVaoDS(SinhVien* caodang);
      void XuatDS();
      void dsSinhVienTotNghiep();
      void dsSinhVienKhongTotNghiep();
      void MaxDTB();
      int getSoSVKhongTotNghiep();

};

DanhSachSinhVienCaoDang::DanhSachSinhVienCaoDang(){

}
DanhSachSinhVienCaoDang::~DanhSachSinhVienCaoDang(){
    for(SinhVien* caodang:ListCaoDang){
        delete caodang;
        caodang=nullptr;
    }
}
void DanhSachSinhVienCaoDang::ThemVaoDS(SinhVien* caodang){
    ListCaoDang.push_back(caodang);
}
void DanhSachSinhVienCaoDang::XuatDS(){
    cout<<"DANH SACH SINH VIEN CAO DANG :"<<endl<<endl;
    for(SinhVien* caodang : ListCaoDang){
        caodang->Xuat();
        cout<<endl<<endl;
    }
}
void DanhSachSinhVienCaoDang::dsSinhVienTotNghiep(){
    cout<<"DANH SACH SINH VIEN CAO DANG TOT NGHIEP :"<<endl<<endl;
    for(SinhVien* caodang : ListCaoDang ){
        if(caodang->getTongSoTC()>=120&&caodang->getDTB()>=5&&caodang->getDiemThiTotNghiep()>=5){
            caodang->Xuat();
            cout<<endl<<endl;
        }
    }
}
void DanhSachSinhVienCaoDang::dsSinhVienKhongTotNghiep(){
    cout<<"DANH SACH SINH VIEN CAO DANG KHONG TOT NGHIEP :"<<endl;
    for(SinhVien* caodang : ListCaoDang){
        if(caodang->getTongSoTC()<120&&caodang->getDTB()<5&&caodang->getDiemThiTotNghiep()<5){
            caodang->Xuat();
            cout<<endl<<endl;
            SoSVKhongTotNghiep++;
        }
    }
}
void DanhSachSinhVienCaoDang::MaxDTB(){
     cout<<"SINH VIEN CAO DANG DIEM CAO NHAT :"<<endl;
     SinhVien* max=ListCaoDang[0];
     for(int i=1;i<ListCaoDang.size();i++){
          if(ListCaoDang[i]->getDTB()>max->getDTB()){
              max=ListCaoDang[i];
          }
    }
    max->Xuat();
}
int DanhSachSinhVienCaoDang::getSoSVKhongTotNghiep(){
    return SoSVKhongTotNghiep;
}
//DS sinh vien Dai Hoc dung 1 class de quan ly
class DanhSachSinhVienDaiHoc{
    private:
      vector<SinhVien*> ListDaiHoc;
      int SoSVKhongTotNghiep=0;
    public:
      DanhSachSinhVienDaiHoc();
      ~DanhSachSinhVienDaiHoc();
      void ThemVaoDS(SinhVien* daihoc);
      void XuatDS();
      void dsSinhVienTotNghiep();
      void dsSinhVienKhongTotNghiep();
      void MaxDTB();
      int getSoSVKhongTotNghiep();
};

DanhSachSinhVienDaiHoc::DanhSachSinhVienDaiHoc(){

}
DanhSachSinhVienDaiHoc::~DanhSachSinhVienDaiHoc(){
  for(SinhVien* daihoc:ListDaiHoc){
       delete daihoc;
       daihoc=nullptr;
  }
}
void DanhSachSinhVienDaiHoc::ThemVaoDS(SinhVien* daihoc){
    ListDaiHoc.push_back(daihoc);
}
void DanhSachSinhVienDaiHoc::XuatDS(){
    cout<<"DANH SACH SINH VIEN DAI HOC :"<<endl<<endl;
    for(SinhVien* daihoc: ListDaiHoc){
        daihoc->Xuat();
        cout<<endl<<endl;
    }
}

void DanhSachSinhVienDaiHoc::dsSinhVienTotNghiep(){
    cout<<"DANH SACH SINH VIEN DAI HOC TOT NGHIEP :"<<endl<<endl;
    for(SinhVien* daihoc: ListDaiHoc){
        if(daihoc->getDTB()>=5&&daihoc->getTongSoTC()>=170&&daihoc->getDiemLuanVan()>=5){
            daihoc->Xuat();
            cout<<endl<<endl;
        }
    }
}
void DanhSachSinhVienDaiHoc::dsSinhVienKhongTotNghiep(){
    cout<<"DANH SACH SINH VIEN DAI HOC KHONG TOT NGHIEP :"<<endl<<endl;
    for(SinhVien* daihoc:ListDaiHoc){
        if(daihoc->getDTB()<5&&daihoc->getTongSoTC()<170&&daihoc->getDiemLuanVan()<5){
            daihoc->Xuat();
            cout<<endl<<endl;
            SoSVKhongTotNghiep++;
        }
    }
}
void DanhSachSinhVienDaiHoc::MaxDTB(){
    cout<<"SINH VIEN DAI HOC DIEM CAO NHAT :"<<endl;
    SinhVien* max=ListDaiHoc[0];
    for(int i=1;i<ListDaiHoc.size();i++){
        if(ListDaiHoc[i]->getDTB()>max->getDTB()){
            max=ListDaiHoc[i];
        }
    }
    max->Xuat();
}
int DanhSachSinhVienDaiHoc::getSoSVKhongTotNghiep(){
    return SoSVKhongTotNghiep;
}
int main(){

    //a,Nhap danh sach sinh vien
   DanhSachSinhVienCaoDang dscaodang;
   DanhSachSinhVienDaiHoc dsdaihoc;
   
   int n;
   cout<<"Nhap so luong sinh vien :"<<endl;
   cin>>n;
   for(int i=0;i<n;i++){
      cout<<"Nhap thong tin sinh vien thu "<<i+1<<endl;
      int choice;
      cout<<"Chon loai sinh vien (1.Cao Dang, 2.Dai hoc)"<<endl;
      cin>>choice;
      SinhVien *a;
      switch (choice)
      {
        case 1:
          a=new SinhVienCaoDang();
          dscaodang.ThemVaoDS(a);
          break;
        case 2:
          a=new SinhVienDaiHoc();
          dsdaihoc.ThemVaoDS(a);
          break;

        default:
          cout<<"lua chon khong hop le :"<<endl;
          i--;
          break;
      }
      a->Nhap();
   }
   //b,Xuat danh sach sinh vien
   cout<<endl<<endl;
   dscaodang.XuatDS();
   dsdaihoc.XuatDS();

   //c, xuat ds sinh vien du dieu kien tot nghiep
   //Danh sach sinh vien cao dang va dai hoc tot nghiep
   dscaodang.dsSinhVienTotNghiep();
   dsdaihoc.dsSinhVienTotNghiep();
   //d,Danh sach sinh vien cao dang va dai hoc khong du dieu kien tot nghiep
   dscaodang.dsSinhVienKhongTotNghiep();
   dsdaihoc.dsSinhVienKhongTotNghiep();
   //e, Sinh vien dai hoc co diem trung binh cao nhat
   dsdaihoc.MaxDTB();
   //f,Sinh vien cao dang co diem trung binh cao nhat 
   dscaodang.MaxDTB();
   //g,So Sinh Vien khong du dieu kien tot nghiep
   cout<<"So sinh vien khong du dieu kien tot nghiep :"<<dscaodang.getSoSVKhongTotNghiep()+dsdaihoc.getSoSVKhongTotNghiep()<<endl;

}