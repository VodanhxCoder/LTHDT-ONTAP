#include <iostream>
#include <string>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>

using namespace std;

class SinhVien
{
private:
    string MaSv;
    string TenSV;
    int NamSinh;
    float DT, DL, DH, DTB;

public:
    static int count; // bien tinh
    SinhVien();
    SinhVien(string _MaSV, string _TenSV, int _NamSinh, float DT, float _DL, float _DH);
    SinhVien(const SinhVien &sv);
    ~SinhVien();
    void Nhap();
    void Xuat();
    void TinhDTB();
    bool SoSanhLonHon(const SinhVien &sv);
    bool operator>(const SinhVien &sv);
    friend istream &operator>>(istream &is, SinhVien &sv);
    friend ostream &operator<<(ostream &os, SinhVien &sv);
};

SinhVien::SinhVien(string _MaSV, string _TenSV, int _NamSinh, float _DT, float _DL, float _DH)
{
    this->MaSv = _MaSV;
    this->TenSV = _TenSV;
    this->NamSinh = _NamSinh;
    this->DT = _DT;
    this->DL = _DL;
    this->DH = _DH;
    this->DTB = (this->DT + this->DL + this->DH) / 3;
}

SinhVien::SinhVien()
{
    this->MaSv = "";
    this->TenSV = "";
    this->NamSinh = 2004;
    this->DT = 0;
    this->DL = 0;
    this->DH = 0;
    this->DTB = (this->DT + this->DL + this->DH) / 3;
}
SinhVien::SinhVien(const SinhVien &sv)
{
    this->MaSv = sv.MaSv;
    this->TenSV = sv.TenSV;
    this->NamSinh = sv.NamSinh;
    this->DT = sv.DT;
    this->DL = sv.DL;
    this->DH = sv.DH;
    this->DTB = (this->DT + this->DL + this->DH) / 3;
}
SinhVien::~SinhVien()
{
}

int SinhVien::count = 0;
void SinhVien::Nhap()
{
    cout << "Nhap MA Sinh Vien: ";

    getline(cin, this->MaSv);

    cout << "Nhap TEN Sinh Vien: ";
    getline(cin, this->TenSV);

    cout << "Nhap Nam Sinh: ";
    cin >> this->NamSinh;

    cout << "Nhap Diem Toan: ";
    cin >> this->DT;

    cout << "Nhap Diem Ly: ";
    cin >> this->DL;

    cout << "Nhap Diem Hoa: ";
    cin >> this->DH;
}
void SinhVien::TinhDTB()
{
    this->DTB = (this->DT + this->DL + this->DH) / 3;
}
void SinhVien::Xuat()
{
    cout << "Ma Sinh Vien: " << this->MaSv << endl;
    cout << "Ten Sinh Vien: " << this->TenSV << endl;
    cout << "Nam Sinh: " << this->NamSinh << endl;
    cout << "Diem Toan: " << this->DT << endl;
    cout << "Diem Ly: " << this->DL << endl;
    cout << "Diem Hoa: " << this->DH << endl;
    cout << "Diem Trung Binh: " << this->DTB << endl;
}
bool SinhVien::operator>(const SinhVien &sv)
{
    if (this->DT + this->DL + this->DH > sv.DT + sv.DL + sv.DH)
    {
        return true;
    }
    else
        return false;
}

istream &operator>>(istream &is, SinhVien &sv)
{
    cout << "Nhap MA Sinh Vien: ";
    cin.ignore();
    getline(is, sv.MaSv);

    cout << "Nhap TEN Sinh Vien: ";
    getline(is, sv.TenSV);

    cout << "Nhap Nam Sinh: ";
    is >> sv.NamSinh;

    cout << "Nhap Diem Toan: ";
    is >> sv.DT;

    cout << "Nhap Diem Ly: ";
    is >> sv.DL;

    cout << "Nhap Diem Hoa: ";
    is >> sv.DH;

    return is;
}

ostream &operator<<(ostream &os, SinhVien &sv)
{
    os << "Ma Sinh Vien: " << sv.MaSv << endl;
    os << "Ten Sinh Vien: " << sv.TenSV << endl;
    os << "Nam Sinh: " << sv.NamSinh << endl;
    os << "Diem Toan: " << sv.DT << endl;
    os << "Diem Ly: " << sv.DL << endl;
    os << "Diem Hoa: " << sv.DH << endl;
    os << "Diem Trung Binh: " << sv.DTB << endl;

    return os;
}

int main()
{
    int ch;
    int n = 1;
    int dem = 0;
    SinhVien *p;
    p = (SinhVien *)malloc(n * sizeof(SinhVien));
    cout << "1.Them 1 Sinh vien" << endl;
    cout << "2.Them nhieu Sinh vien " << endl;
    cout << "3.In danh sach Sinh Vien" << endl;
    cout << "4. Sap xep Sinh Vien theo Diem trung binh" << endl;
    cout << "5. Xem so luong doi tuong da cap phat" << endl;
    cin >> ch;

    switch (ch)
    {
    case 1:
    {
        p[dem].Nhap();
        dem++;
    }
    break;
    case 2:

        break;
    case 3:

        break;
    case 4:

        break;
    case 5:

        break;

    default:
        break;
    }
}
