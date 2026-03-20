#include "SoPhuc.h"
#include <bits/stdc++.h>
using namespace std;
void SoPhuc::Nhap(){
    cout<<"Nhap so thuc: "; cin>>iThuc;
    cout<<'\n';
    cout<<"Nhap so ao: "; cin>>iAo;
}

void SoPhuc::Xuat(){
    cout<<iThuc<<" + ("<<iAo<<")i"<<endl;
}
//Ham tinh tong 2 so phuc
SoPhuc SoPhuc::tinhTong(SoPhuc a){
    a.iAo += iAo;
    a.iThuc += iThuc;
    return a;
}
//Ham tinh hieu 2 so phuc
SoPhuc SoPhuc::tinhHieu(SoPhuc a){
    a.iAo = iAo-a.iAo;
    a.iThuc = iThuc - a.iThuc;
    return a;
}
//Ham tinh tich 2 so phuc
SoPhuc SoPhuc::tinhTich(SoPhuc a){
    double thuc = (a.iThuc*iThuc - a.iAo*iAo);
    double ao = (a.iThuc*iAo + iThuc*a.iAo);
    a.iAo = ao;
    a.iThuc = thuc;
    return a;
}
//Ham tinh thuong 2 so phuc (self / a)
SoPhuc SoPhuc::tinhThuong(SoPhuc a){
    double c = a.iAo*a.iAo + a.iThuc*a.iThuc;

    double thuc = (a.iThuc*iThuc + a.iAo*iAo)/c;
    double ao = (iThuc*a.iAo - a.iThuc*iAo)/c;
    a.iAo = ao;
    a.iThuc = thuc;
    return a;
}


