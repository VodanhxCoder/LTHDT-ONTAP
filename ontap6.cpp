#include <iostream>
#include <string.h>

using namespace std;

class Store
{
private:
	string MaCH;
	int SoLuongNV;
	string TenCH, DiaChi;

public:
	Store();
	Store(string MaCH, int SoLuongNV, string TenCH, string DiaChi);
	~Store();
	void Nhap();
	void Xuat();
	bool Thuoc(string Diachi);
	bool Cantuyendung();
};
Store::Store(string MaCH, int SoLuongNV, string TenCH, string DiaChi)
{
	this->MaCH = MaCH;
	this->TenCH = TenCH;
	this->DiaChi = DiaChi;
	this->SoLuongNV = SoLuongNV;
}

Store::Store()
{
	this->MaCH = "";
	this->TenCH = "";
	this->DiaChi = "";
	this->SoLuongNV = 0;
}

Store::~Store()
{
	this->MaCH = "";
	this->TenCH = "";
	this->DiaChi = "";
	this->SoLuongNV = 0;
}

void Store::Nhap()
{
	cout << "Nhap ma ch: ";
	cin.ignore();
	getline(cin, this->MaCH);

	cout << "Nhap Ten ch: ";
	getline(cin, this->TenCH);

	cout << "Nhap Dia Chi: ";
	getline(cin, this->DiaChi);

	cout << "Nhap So luong NV: ";
	cin >> this->SoLuongNV;
}

void Store::Xuat()
{
	cout << "-Ma ch: " << this->MaCH << endl;
	cout << "-Ten Ch:" << this->TenCH << endl;
	cout << "-Dia Chi: " << this->DiaChi << endl;
	cout << "-So luong NV: " << this->SoLuongNV << endl;
}

bool Store::Thuoc(string DiaChi)
{
	if (this->DiaChi.compare(DiaChi) == 0)
	{
		return true;
	}
	else
		return false;
}

bool Store::Cantuyendung()
{
	if (this->SoLuongNV <= 2)
		return true;
	else
		return false;
}

int main()
{
	int n;
	string DiaChi = "CauGiay";
	do
	{
		cout << "Nhap so luong phan tu: ";
		cin >> n;

	} while (n <= 0);
	cout << "Nhap tt: " << endl;

	Store st[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ":" << endl;
		st[i].Nhap();
	}
	cout << "Cac phan tu thuoc Cau Giay va can tuyen dung: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (st[i].Thuoc(DiaChi) && st[i].Cantuyendung())

			st[i].Xuat();
	}
}
