#ifndef SOPHUC_H
#define SOPHUC_H


class SoPhuc
{
private:
    double iThuc, iAo;

public:
    void Nhap();
    void Xuat();
    SoPhuc tinhTong(SoPhuc a);
    SoPhuc tinhHieu(SoPhuc a);
    SoPhuc tinhTich(SoPhuc a);
    SoPhuc tinhThuong(SoPhuc a);
};

#endif // SOPHUC_H
