#include <iostream>
#include <string>
using namespace std;
class date
{
private:
    int ngay, thang, nam;

public:
    date();
    date(int _ngay, int _thang, int _nam);

    ~date();
    void Nhap();
    void Xuat();
    bool operator>(const date &d);
};

date::date(int _ngay, int _thang, int _nam)
{
    cout << "kt co ts" << endl;
    this->ngay = _ngay;
    this->thang = _thang;
    this->nam = _nam;
}
date::date()
{
    cout << "kt ko ts" << endl;
    this->ngay = 1;
    this->thang = 1;
    this->nam = 2020;
}

date::~date()
{
    cout << "huy doi tuong" << endl;
    this->ngay = 0;
    this->thang = 0;
    this->nam = 2024;
}
void date::Nhap()
{
    cout << "nhap ngay: ";
    cin >> this->ngay;
    cout << "nhap thang: ";
    cin >> this->thang;
    cout << "nhap nam: ";
    cin >> this->nam;
}
void date::Xuat()
{
    cout << this->ngay << "/" << this->thang << "/" << this->nam << endl;
}
bool date::operator>(const date &d)
{
    if (this->nam > d.nam)
        return 1;
    else if (this->nam == d.nam)
    {
        if (this->thang > d.thang)
            return 1;
        else if (this->thang == d.thang)
        {
            if (this->ngay > d.ngay)
                return 1;
            else
                return 0;
        }
        else
            return 0;
    }
    else
        return 0;
}
int main()
{
    int n;
    do
    {
        cout << "nhap so luong phan tu: ";
        cin >> n;
    } while (n <= 0);
    date d[n];
    for (int i = 0; i < n; i++)
    {

        cout << "nhap ngay thu " << i + 1 << ":" << endl;
        d[i].Nhap();
        cout << "-----------" << endl;
    }
    cout << "nhung ngay vua nhap: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "ngay thu " << i + 1 << ": ";
        d[i].Xuat();
    }
    date dmax = d[0];
    for (int i = 0; i < n; i++)
    {
        if (d[i] > dmax)
        {
            dmax = d[i];
        }
    }
    cout << "ngay lon nhat la: ";
    dmax.Xuat();
    return 0;
}
