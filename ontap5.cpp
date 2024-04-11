#include <iostream>

using namespace std;

class Date
{
private:
    int ngay, thang, nam;

public:
    Date(int ngay, int thang, int nam);
    Date();
    ~Date();

    friend istream &operator>>(istream &is, Date &time);
    friend ostream &operator<<(ostream &os, const Date &time);
    bool operator<(const Date &time);
};

Date::Date(int ngay, int thang, int nam)
{
    this->ngay = ngay;
    this->thang = thang;
    this->nam = nam;
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
bool Date::operator<(const Date &time)
{
    if (this->nam < time.nam)
    {
        return true;
    }
    else if (this->nam == time.nam)
    {
        if (this->thang < time.thang)
        {
            return true;
        }
        else if (this->thang == time.thang)
        {
            if (this->ngay < time.ngay)
            {
                return true;
            }
            return false;
        }
        return false;
    }
    return false;
}

istream &operator>>(istream &is, Date &time)
{
    cout << "Nhap ngay: ";
    is >> time.ngay;

    cout << "Nhap thang: ";
    is >> time.thang;

    cout << "Nhap nam: ";
    is >> time.nam;

    return is;
}

ostream &operator<<(ostream &os, const Date &time)
{
    os << "Nhap ngay: " << time.ngay << endl;

    os << "Nhap thang: " << time.thang << endl;

    os << "Nhap nam: " << time.nam << endl;

    return os;
}
int main()
{
    int count;
    do
    {
        cout << "Nhap so luong phan tu: ";
        cin >> count;
    } while (count <= 0);

    Date Time[count];
    for (int i = 0; i < count; i++)
    {
        cout << "------------------------------------" << endl;
        cin >> Time[i];
    }
    cout << "=======================================================" << endl;
    cout << "Danh sach cac Time da nhap: " << endl;
    for (int i = 0; i < count; i++)
    {
        cout << "------------------------------------" << endl;
        cout << Time[i];
    }
    cout << "=======================================================" << endl;
    cout << "danh sach theo chieu giam dan: " << endl;
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (Time[i] < Time[j])
            {
                Date tg = Time[i];
                Time[i] = Time[j];
                Time[j] = tg;
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        cout << "------------------------------------" << endl;
        cout << Time[i];
    }
}