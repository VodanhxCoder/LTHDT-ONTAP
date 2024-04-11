#include <iostream>
#include <string>

using namespace std;

class hinhkhoicn
{
private:
    float dai;
    float rong;
    float cao;

public:
    hinhkhoicn();
    hinhkhoicn(float _dai, float _rong, float _cao);
    void Nhap();
    void Xuat();
    bool Kiemtra();
    bool KiemTraLapPhuong();
    ~hinhkhoicn();
};
hinhkhoicn::hinhkhoicn()
{
    cout << "khoi tao khong tham so" << endl;
    this->dai = 0;
    this->rong = 0;
    this->cao = 0;
}
hinhkhoicn::hinhkhoicn(float _dai, float _rong, float _cao)
{
    cout << "khoi tao co tham so" << endl;
    this->dai = _dai;
    this->rong = _rong;
    this->cao = _cao;
}

hinhkhoicn::~hinhkhoicn()
{
    cout << "huy doi tuong" << endl;
    this->dai = 0;
    this->rong = 0;
    this->cao = 0;
}
void hinhkhoicn::Nhap()
{
    cout << "Nhap thong so hinh chu nhat: " << endl;
    cout << "nhap chieu dai: ";
    cin >> this->dai;
    cout << "nhap chieu rong: ";
    cin >> this->rong;
    cout << "nhap chieu cao: ";
    cin >> this->cao;
}

void hinhkhoicn ::Xuat()
{
    cout << "Thong So hinh chu nhat: " << endl;
    cout << "chieu dai: " << this->dai << endl;
    cout << "chieu rong: " << this->rong << endl;
    cout << "chieu cao: " << this->cao << endl;
}
bool hinhkhoicn::Kiemtra()
{
    return (this->dai > 0 && this->rong > 0 && this->cao > 0) ? true : false;
}
bool hinhkhoicn::KiemTraLapPhuong()
{
    return (this->dai == this->rong && this->rong == this->cao) ? true : false;
}
int main()
{
    int n;
    cout << "nhap so luong hinh chu nhat: ";
    cin >> n;

    hinhkhoicn cn[n];

    for (int i = 0; i < n; i++)
    {
        cn[i].Nhap();
    }
    cout << "---------------------------------------------" << endl;
    cout << "tt hinh chu nhat: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (cn[i].Kiemtra())
        {
            cout << "hinh " << i + 1 << ":" << endl;
            cn[i].Xuat();
        }
    }

    cout << "tt nhung hinh lap phuong: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (cn[i].Kiemtra())
        {
            if (cn[i].KiemTraLapPhuong())
            {
                cout << "hinh " << i + 1 << ":" << endl;
                cn[i].Xuat();
            }
        }
    }
    return 0;
}
