#include "NgayThangNam.h"
#include <bits/stdc++.h>
using namespace std;

int numDays[13] = {0,31,0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// Ham nhap input
void NgayThangNam::Nhap()
{
    while(true){
        cout<<"Nhap ngay: "; cin>>iNgay;
        cout<<'\n';
        cout<<"Nhap thang: "; cin>>iThang;
        cout<<'\n';
        cout<<"Nhap nam: "; cin>>iNam;
        numDays[2] = ((iNam%4==0 && iNam%100!= 0) ? 29 : 28);
        if(iNgay == 0 || iThang == 0) continue;
        else if(iThang > 12 || iNgay > numDays[iThang]) continue;
        else break;
    }
}
// Ham xuat Ngay Thang Nam
void NgayThangNam::Xuat()
{
    printf("Ngay %i Thang %i Nam %i", iNgay, iThang, iNam);
}

// Ham tinh toan ngay ke tiep va tra ve object NgayThangNam
NgayThangNam NgayThangNam::NgayThangNamTiepTheo()
{
    int day=iNgay, month=iThang, year=iNam;
    if(numDays[iThang] > day) day++;
    else if(month == 12){
        year++; day=month=1;
    }

    else{
        month++;
        day = 1;
    }
    NgayThangNam tt;
    tt.iNam = year; tt.iThang = month; tt.iNgay = day;
    return tt;
}
