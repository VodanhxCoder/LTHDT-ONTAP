#include <iostream>
#include <malloc.h>
#include <string.h>
using namespace std;

struct date
{
    int ngay, thang, nam;
};
class TS
{
private:
    string SBD;
    date *ngaysinh;
    string khuvuc;

public:
    TS();
    ~TS();
    void nhap();
    void in();
};
TS::TS()
{
    ngaysinh = new date; // C?p phát b? nh? cho ngaysinh
}

// Destructor
TS::~TS()
{
    delete ngaysinh;
}
void TS::nhap()
{
    cout << "-------------" << endl;
    cout << "nhap SBD: ";
    cin.ignore();
    getline(cin, this->SBD);
    cout << "nhap ngay thang nam sinh: " << endl;
    cout << "nhap ngay: ";
    cin >> this->ngaysinh->ngay;
    cout << "thang: ";
    cin >> this->ngaysinh->thang;
    cout << "nam: ";

    cin >> this->ngaysinh->nam;
    cout << "nhap khu vuc: ";
    cin.ignore();
    getline(cin, this->khuvuc);
}
void TS::in()
{
    cout << "------------------------------------" << endl;
    cout << "SBD: " << this->SBD << endl;
    cout << "ngay sinh: " << this->ngaysinh->ngay << "-" << this->ngaysinh->thang << "-" << this->ngaysinh->nam << endl;
    cout << "khu vuc: " << this->khuvuc << endl;
}

class TSA : public TS
{
private:
    float toan, ly, hoa;

public:
    void nhap();
    void in();
    bool xetdiem();
};

void TSA::nhap()
{
    this->TS::nhap();
    cout << "nhap diem toan: ";
    cin >> this->toan;
    cout << "ly: ";
    cin >> this->ly;
    cout << "hoa: ";
    cin >> this->hoa;
}
void TSA::in()
{
    this->TS::in();
    cout << "diem toan: " << this->toan << endl;
    cout << "diem ly: " << this->ly << endl;
    cout << "diem hoa: " << this->hoa << endl;
}
bool TSA::xetdiem()
{
    if (this->toan + this->ly + this->hoa >= 24.5)
        return true;
    else
        return false;
}
class TSC : public TS
{
private:
    float van, su, dia;

public:
    void nhap();
    void in();
    bool xetdiem();
};
void TSC::nhap()
{
    this->TS::nhap();
    cout << "nhap diem van: ";
    cin >> this->van;
    cout << "nhap diem su: ";
    cin >> this->su;
    cout << "nhap diem dia: ";
    cin >> this->dia;
}
void TSC::in()
{
    this->TS::in();
    cout << "van: " << this->van << endl;
    cout << "su: " << this->su << endl;
    cout << "dia: " << this->dia << endl;
}

bool TSC::xetdiem()
{
    if (this->van + this->su + this->dia >= 23.5)
        return true;
    else
        return false;
}
int main()
{
    int a, c;
    do
    {
        cout << "nhap so luong thi sinh khoi A: ";
        cin >> a;
    } while (a < 0);
    TSA tsa[a];

    for (int i = 0; i < a; i++)
    {
        tsa[i].nhap();
    }
    cout << "==========================================" << endl;
    do
    {

        cout << "nhap so luong thi sinh khoi C:";
        cin >> c;
    } while (c < 0);
    TSC tsc[c];
    for (int i = 0; i < c; i++)
    {
        tsc[i].nhap();
    }

    cout << "===============================================================================" << endl;
    cout << "Sinh vien Khoi A:" << a << endl;
    for (int i = 0; i < a; i++)
    {
        tsa[i].in();
    }
    cout << "====================================" << endl;
    cout << "Sinh Vien Khoi C: " << c << endl;
    for (int i = 0; i < c; i++)
    {
        tsc[i].in();
    }
    //=======================================================================
    int tsad = 0, tscdau = 0;
    cout << "===============================================================================" << endl;
    cout << "danh sach dau khoi A: " << endl;
    for (int i = 0; i < a; i++)
    {
        if (tsa[i].xetdiem())
        {
            tsa[i].in();
            tsad++;
        }
    }
    cout << "Tong: " << tsad << endl;
    cout << "====================================" << endl;
    cout << "danh sach dau khoi C: " << endl;
    for (int i = 0; i < c; i++)
    {
        if (tsc[i].xetdiem())
        {
            tsc[i].in();
            tscdau++;
        }
    }
    cout << "Tong: " << tscdau << endl;
}
