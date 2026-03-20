#include <bits/stdc++.h>
#include "NgayThangNam.h"
using namespace std;

int main(){
    NgayThangNam day;
    // Nhap input
    day.Nhap();
    //Tinh toan Ngay ke tiep
    NgayThangNam dayTiepTheo = day.NgayThangNamTiepTheo();
    //In ket qua
    dayTiepTheo.Xuat();
}
