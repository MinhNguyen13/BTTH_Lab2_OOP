#include "GioPhutGiay.h"
#include <bits/stdc++.h>
using namespace std;

// Ham nhap input
void GioPhutGiay::Nhap()
{
    cout<<"Nhap gio: "; cin>>iGio;
    cout<<"Nhap phut: "; cin>>iPhut;
    cout<<"Nhap giay: "; cin>>iGiay;
}
// Ham in ra man hinh
void GioPhutGiay::Xuat()
{
    printf("%i gio %i phut %i giay", iGio, iPhut, iGiay);
}
// Ham tinh thoi gian sau 1 giay
void GioPhutGiay::TinhCongThemMotGiay(){
    iGiay++;
    iPhut += (iGiay/60);
    iGiay%=60;
    iGio += (iPhut/60);
    iPhut%=60;
    iGio%=24;
}
