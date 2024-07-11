#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;
//CLASS CHA
class NhanVien{
    protected:
       string MaNhanVien;
       string HoTen;
       int tuoi;
       int SoDienThoai;
       string email;
       float LuongCoBan;
       float SoGioOverTime;
       float SoLoiPhatHien;
    public:
       virtual void Nhap()=0;
       virtual void Xuat()=0;
       virtual float tinhLuong()=0;
};
//CLASS CON
class LapTrinhVien : public NhanVien{
    public:
       void Nhap();
       void Xuat();
       float tinhLuong();
};
void LapTrinhVien::Nhap(){
    cout<<"Nhap thong tin lap trinh vien :"<<endl;
    cout<<"Nhap ma nhan vien :"<<endl;
    cin.ignore();
    getline(cin,MaNhanVien);
    cout<<"Nhap ho ten :"<<endl;
    getline(cin,HoTen);
    cout<<"Nhap tuoi :"<<endl;
    cin>>tuoi;
    cout<<"Nhap so dien thoai "<<endl;
    cin>>SoDienThoai;
    cout<<"Nhap luong co ban "<<endl;
    cin>>LuongCoBan;
    cout<<"Nhap so gio overtime "<<endl;
    cin>>SoGioOverTime;
}
float LapTrinhVien:: tinhLuong(){
    return LuongCoBan+SoGioOverTime*200000;
}
void LapTrinhVien::Xuat(){
    cout<<"Ma nhan vien :"<<MaNhanVien<<" - Ho Ten: "<<HoTen<<" - Tuoi: "<<tuoi<<" - So Dien Thoai: "<<SoDienThoai<<" - Luong: "<<tinhLuong()<<endl;
}
//CLASS CON
class KiemChungVien : public NhanVien{
    public:
       void Nhap();
       void Xuat();
       float tinhLuong();
};
void KiemChungVien::Nhap(){
    cout<<"Nhap thong tin kiem chung vien :"<<endl;
    cout<<"Nhap ma nhan vien :"<<endl;
    cin.ignore();
    getline(cin,MaNhanVien);
    cout<<"Nhap ho ten :"<<endl;
    getline(cin,HoTen);
    cout<<"Nhap tuoi :"<<endl;
    cin>>tuoi;
    cout<<"Nhap so dien thoai "<<endl;
    cin>>SoDienThoai;
    cout<<"Nhap luong co ban "<<endl;
    cin>>LuongCoBan;
    cout<<"Nhap so loi phat hien "<<endl;
    cin>>SoLoiPhatHien;
}
float KiemChungVien::tinhLuong(){
    return LuongCoBan+SoLoiPhatHien*50000;
}
void KiemChungVien::Xuat(){
    cout<<"Ma nhan vien :"<<MaNhanVien<<" - Ho Ten: "<<HoTen<<" - Tuoi: "<<tuoi<<" - So Dien Thoai: "<<SoDienThoai<<" - Luong: "<<tinhLuong()<<endl;
}

// Danh sach nhan vien
class DanhSachNhanVien{
    protected:
     vector<NhanVien*> ListNhanVien;
    public:
      DanhSachNhanVien();
      ~DanhSachNhanVien();
      virtual void NhapDanhSach(NhanVien* nhanvien);
      virtual void XuatDanhSach();
      virtual void NhanVienLuongThap();
      virtual void NhanVienLuongCaoNhat();
      virtual void NhanVienLuongThapNhat();
};
DanhSachNhanVien::DanhSachNhanVien(){

}
DanhSachNhanVien::~DanhSachNhanVien(){
    for(NhanVien* nhanvien:ListNhanVien){
        delete nhanvien;
        nhanvien=nullptr;
    }
}
void DanhSachNhanVien::NhapDanhSach(NhanVien* nhanvien){
     ListNhanVien.push_back(nhanvien);
}
void DanhSachNhanVien::XuatDanhSach(){
    cout<<"DANH SACH NHAN VIEN :"<<endl;
    for(NhanVien* nhanvien:ListNhanVien){
        nhanvien->Xuat();
        cout<<endl<<endl;
    }
}
void DanhSachNhanVien::NhanVienLuongThap(){
    float TB=0;
    for(NhanVien* nhanvien:ListNhanVien){
        TB+=nhanvien->tinhLuong();
    }
    for(NhanVien* nhanvien:ListNhanVien){
        if(nhanvien->tinhLuong()<TB/ListNhanVien.size()){
            nhanvien->Xuat();
        }  
    } 
}
void DanhSachNhanVien::NhanVienLuongCaoNhat(){
    cout<<"NHAN VIEN LUONG CAO NHAT :"<<endl;
    NhanVien* luongMax=ListNhanVien[0];
    for(int i=0;i<ListNhanVien.size();i++){
         if(ListNhanVien[i]->tinhLuong()>luongMax->tinhLuong()){
            luongMax=ListNhanVien[i];
         }
    }
    luongMax->Xuat();
}
void DanhSachNhanVien::NhanVienLuongThapNhat(){
    cout<<"NHAN VIEN LUONG THAP NHAT :"<<endl;
    NhanVien* luongMin=ListNhanVien[0];
    for(int i=0;i<ListNhanVien.size();i++){
        if(ListNhanVien[i]->tinhLuong()<luongMin->tinhLuong()){
            luongMin=ListNhanVien[i];
        }
    }
    luongMin->Xuat();
}
// DANH SACH LAP TRINH VIEN
class DanhSachLapTrinhVien : public DanhSachNhanVien{
    public:
       DanhSachLapTrinhVien();
       ~DanhSachLapTrinhVien();
       void NhapDanhSach(NhanVien* nhanvien);
       void LapTrinhVienLuongMax();
}; 
DanhSachLapTrinhVien::DanhSachLapTrinhVien(){

}
DanhSachLapTrinhVien::~DanhSachLapTrinhVien(){
    for(NhanVien* nhanvien:ListNhanVien){
        delete nhanvien;
        nhanvien=nullptr;
    }
}
void DanhSachLapTrinhVien::NhapDanhSach(NhanVien* nhanvien){
    ListNhanVien.push_back(nhanvien);
}
void DanhSachLapTrinhVien::LapTrinhVienLuongMax(){
    cout<<"LAP TRINH VIEN LUONG CAO NHAT :"<<endl;
    NhanVien* luongMax=ListNhanVien[0];
    for(int i=0;i<ListNhanVien.size();i++){
         if(ListNhanVien[i]->tinhLuong()>luongMax->tinhLuong()){
            luongMax=ListNhanVien[i];
         }
    }
    luongMax->Xuat();
}
//DANH SACH KIEM CHUNG VIEN
class DanhSachKiemCHungVien : public DanhSachNhanVien{
    public:
       DanhSachKiemCHungVien();
       ~DanhSachKiemCHungVien();
       void NhapDanhSach(NhanVien* nhanvien);
       void KiemChungVienMin();
}; 
DanhSachKiemCHungVien::DanhSachKiemCHungVien(){

}
DanhSachKiemCHungVien::~DanhSachKiemCHungVien(){
    for(NhanVien* nhanvien:ListNhanVien){
        delete nhanvien;
        nhanvien=nullptr;
    }
}
void DanhSachKiemCHungVien::NhapDanhSach(NhanVien* nhanvien){
    ListNhanVien.push_back(nhanvien);
}

void DanhSachKiemCHungVien::KiemChungVienMin(){
    cout<<"KIEM CHUNG VIEN LUONG THAP NHAT :"<<endl;
    NhanVien* luongMin=ListNhanVien[0];
    for(int i=0;i<ListNhanVien.size();i++){
        if(ListNhanVien[i]->tinhLuong()<luongMin->tinhLuong()){
            luongMin=ListNhanVien[i];
        }
    }
    luongMin->Xuat();
}
int main(){
    DanhSachNhanVien ds;
    DanhSachLapTrinhVien dsLTV;
    DanhSachKiemCHungVien dsKCV;
    //a,Nhap danh sach nhan vien
    int n;
    cout<<"Nhap so luong nhan vien :"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Nhap thong tin nhan vien thu "<<i+1<<endl;
        cout<<"Nhap 1 neu la lap trinh vien, 2 neu la kiem chung vien"<<endl;
        int loai;
        cin>>loai;
        if(loai==1){
            LapTrinhVien* ltv=new LapTrinhVien();
            ltv->Nhap();
            ds.NhapDanhSach(ltv);
            dsLTV.NhapDanhSach(ltv);
        }else{
            KiemChungVien* kcv=new KiemChungVien();
            kcv->Nhap();
            ds.NhapDanhSach(kcv);
            dsKCV.NhapDanhSach(kcv);
        }
    }
    cout<<endl<<endl;
    //b, Xuat danh sach nhan vien
    ds.XuatDanhSach();
    cout<<endl<<endl;
    //c, danh sach nhan vien luon thap hon muc luong trung binh cua cac nhan vien
    ds.NhanVienLuongThap();
    cout<<endl<<endl;
    //d, Nhan vien luong cao nhat
    ds.NhanVienLuongCaoNhat();
    cout<<endl<<endl;
    //e,nhan vien luong thap nhat
    ds.NhanVienLuongThapNhat();
    cout<<endl<<endl;
    //f, Lap trinh vien luong cao nhat
    dsLTV.LapTrinhVienLuongMax();
    cout<<endl<<endl;
    //g, Kiem chung vien luong thap nhat
    dsKCV.KiemChungVienMin();
    return 0;
}
