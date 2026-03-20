#include <iostream>
#include "PhanSo.h"
using namespace std;


// Hàm tìm UCLN
int UCLN(int a, int b) {
    if (b == 0) return a;
    return UCLN(b, a % b);
}
// Hàm nhập 1 phân số
void PhanSo::Nhap() {
    cout << "Nhap tu: ";
    cin >> iTu;
    do {
        cout << "Nhap mau (khac 0): ";
        cin >> iMau;
    } while (iMau == 0);
}
// Hàm in ra màn hình 1 phân số
void PhanSo::Xuat() {
    cout << iTu << "/" << iMau;
}
// Hàm rút gọn phân số
void PhanSo::RutGon() {
    int ucln = UCLN(abs(iTu), abs(iMau));
    iTu /= ucln;
    iMau /= ucln;


    // Đưa dấu về tử
    if (iMau < 0) {
        iTu = -iTu;
        iMau = -iMau;
    }
}
// Hàm tính tổng 2 phân số
PhanSo PhanSo::Tong(PhanSo ps) {
    PhanSo kq;
    kq.iTu = iTu * ps.iMau + ps.iTu * iMau;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}
// Hàm tính hiệu 2 phân số
PhanSo PhanSo::Hieu(PhanSo ps) {
    PhanSo kq;
    kq.iTu = iTu * ps.iMau - ps.iTu * iMau;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}
// Hàm tính tích 2 phân số
PhanSo PhanSo::Tich(PhanSo ps) {
    PhanSo kq;
    kq.iTu = iTu * ps.iTu;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}
// Hàm tính thương 2 phân số
PhanSo PhanSo::Thuong(PhanSo ps) {
    PhanSo kq;
    kq.iTu = iTu * ps.iMau;
    kq.iMau = iMau * ps.iTu;
    kq.RutGon();
    return kq;
}
// Hàm so sánh 2 phân số
int PhanSo::SoSanh(PhanSo ps) {
    int left = iTu * ps.iMau;
    int right = ps.iTu * iMau;


    if (left > right) return 1;
    if (left == right) return 0;
    return -1;
}
