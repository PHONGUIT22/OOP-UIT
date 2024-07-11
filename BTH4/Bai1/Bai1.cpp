#include<iostream>
#include<cmath>

using namespace std;

// operator nhap hai so phuc
istream& operator>>(istream& is, SoPhuc &a){
    is>>a.thuc;
    is>>a.ao;
    return is;
}
ostream& operator<<(ostream& os, const SoPhuc a){
    os<<a.thuc<<" "<<a.ao<<endl;
    return os;
}
//operator cong hai so phuc
SoPhuc SoPhuc::operator+(const SoPhuc &a) const{
       return SoPhuc(thuc + a.thuc, ao + a.ao);
}
//operator tru hai so phuc
SoPhuc SoPhuc::operator-(const SoPhuc& a) const{
       return SoPhuc(thuc-a.thuc, ao-a.ao);
}
//operator nhan hai so phuc
SoPhuc SoPhuc::operator*(const SoPhuc& a) const{
    return SoPhuc((thuc*a.thuc-ao*a.ao),(thuc*a.ao+ao*a.thuc));
}
//operator chia hai so phuc
SoPhuc SoPhuc::operator/(const SoPhuc& a) const{
    float t=pow(a.thuc,2)+pow(a.ao,2);
    return SoPhuc((thuc*a.thuc+ao*a.ao)/t,(a.thuc*ao-thuc*a.ao)/t);
}
bool SoPhuc::operator!=(const SoPhuc& a) const{
    if((thuc!=a.thuc)||(ao!=a.ao)) return 1;
    else return 0;
}
bool SoPhuc::operator==(const SoPhuc& a) const{
    if ((thuc==a.thuc)&&(ao==a.ao)) return 1;
    else return 0;
}
bool SoPhuc::operator>(const SoPhuc& a) const{
    if((sqrt(pow(thuc,2)+pow(ao,2)))>(sqrt(pow(a.thuc,2)+pow(a.ao,2)))) return 1;
    else return 0;
}
bool SoPhuc::operator<(const SoPhuc& a) const{
    if((sqrt(pow(thuc,2)+pow(ao,2)))<(sqrt(pow(a.thuc,2)+pow(a.ao,2)))) return 1;
    else return 0;
}
bool SoPhuc::operator>=(const SoPhuc& a) const{
    if((sqrt(pow(thuc,2)+pow(ao,2)))>=(sqrt(pow(a.thuc,2)+pow(a.ao,2)))) return 1;
    else return 0;
}
bool SoPhuc::operator<=(const SoPhuc& a) const{
    if((sqrt(pow(thuc,2)+pow(ao,2)))<=(sqrt(pow(a.thuc,2)+pow(a.ao,2)))) return 1;
    else return 0;
}
