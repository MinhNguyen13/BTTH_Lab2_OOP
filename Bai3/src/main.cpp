#include <bits/stdc++.h>
#include "SoPhuc.h"
using namespace std;

int main(){

    SoPhuc a,b;
    cout<<"Nhap so phuc 1 \n";
    a.Nhap();
    cout<<'\n';
    cout<<"Nhap so phuc 2 \n";
    b.Nhap();
    cout<<'\n';

    SoPhuc tong, hieu, tich, thuong;
    tong = a.tinhTong(b);
    hieu = a.tinhHieu(b);
    tich = a.tinhTich(b);
    thuong = a.tinhThuong(b);


    cout<<"Tong: "; tong.Xuat();
    cout<<"Hieu: ";hieu.Xuat();
    cout<<"Tich: ";tich.Xuat();
    cout<<"Thuong: ";thuong.Xuat();



}
