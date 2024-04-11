#include <iostream>
using namespace std;
class connguoi
{
private:
	string CMND;
	string hoten;
	string gioitinh;
	int namsinh;

public:
	void nhapCN();
	void xuatCN();
};
void connguoi::nhapCN()
{
	cout << "nhap cmnd";
	cin.ignore();
	getline(cin, this->CMND);
	cout << "nhap ho ten";
	getline(cin, this->hoten);
	cout << "nhap gioi tinh";
	getline(cin, this->gioitinh);
	cout << "nhap nam sinh";
	cin >> this->namsinh;
}
void connguoi::xuatCN()
{
	cout << "CMND" << this->CMND << endl;
	cout << "hoten" << this->hoten << endl;
	cout << "gioi tinh" << this->gioitinh << endl;
	cout << "nam sinh" << this->namsinh << endl;
}
class sinhvien : public connguoi
{
private:
	string masv;
	string malop;
	float DTB;

public:
	void nhap();
	void xuat();
};
void sinhvien::nhap()
{
	this->connguoi::nhapCN();
	cout << "nhap ma sinh vien";
	cin.ignore();
	getline(cin, this->masv);
	cout << "nhap ma lop";
	getline(cin, this->malop);
	cout << "nhap DTB";
	cin >> this->DTB;
}
void sinhvien::xuat()
{
	this->connguoi ::xuatCN();
	cout << "ma sv" << this->masv << endl;
	cout << "ma lop" << this->malop << endl;
	cout << "DTB" << this->DTB;
}
int main()
{
	sinhvien sv;
	sv.nhap();
	sv.xuat();
}
