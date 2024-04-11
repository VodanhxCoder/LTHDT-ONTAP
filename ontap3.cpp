#include <iostream>

using namespace std;

class Date
{
private:
    int ngay, thang, nam;

public:
    Date(int _ngay, int _thang, int _nam);
    Date();
    void Nhap();
    void Xuat();
    bool operator>(const Date &dt);
    ~Date();
};

Date::Date(int _ngay, int _thang, int _nam)
{
    this->ngay = _ngay;
    this->thang = _thang;
    this->nam = _nam;
}

Date::Date()
{
    this->ngay = 1;
    this->thang = 1;
    this->nam = 2004;
}
Date::~Date()
{
    this->ngay = 1;
    this->thang = 1;
    this->nam = 2004;
}
void Date::Nhap()
{
    cout << "Nhap Ngay: ";
    cin >> this->ngay;

    cout << "Nhap Thang: ";
    cin >> this->thang;

    cout << "Nhap Nam: ";
    cin >> this->nam;
}

void Date::Xuat()
{
    cout << "- Ngay: " << this->ngay << endl;

    cout << "- Thang: " << this->thang << endl;

    cout << "- Nam: " << this->nam << endl;
}

bool Date::operator>(const Date &dt)
{
    if (this->nam > dt.nam)
    {
        return true;
    }
    else if (this->nam == dt.nam)
    {
        if (this->thang > dt.thang)
        {
            return true;
        }
        else if (this->thang == dt.thang)
        {
            if (this->ngay > dt.ngay)
            {
                return true;
            }
            return false;
        }
        return false;
    }

    else
        return false;
}

int main()
{
    int size;
    cout << "Nhap so luong phan tu: ";
    cin >> size;

    Date dt[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Nhap Date " << i + 1 << ":" << endl;
        dt[i].Nhap();
    }
    Date dtmax = dt[0];
    for (int i = 1; i < size; i++)
    {
        if (dt[i] > dtmax)
        {
            dtmax = dt[i];
        }
    }
    cout << "Date lon nhat: " << endl;
    dtmax.Xuat();
}
