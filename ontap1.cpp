#include <iostream>

using namespace std;

class Hinhkhoicn
{
private:
    float dai;
    float rong;
    float cao;

public:
	Hinhkhoicn();
    Hinhkhoicn(float _dai , float _rong , float _cao );
    
    void Nhap();
    void Xuat();
    bool Kiemtra();
    bool KiemTraLapPhuong();
    ~Hinhkhoicn();
};
Hinhkhoicn ::Hinhkhoicn(float _dai, float _rong, float _cao)
{
    this->dai = _dai;
    this->rong = _rong;
    this->cao = _cao;
}
Hinhkhoicn::Hinhkhoicn()
{
    this->dai = 0;
    this->rong = 0;
    this->cao = 0;
}
Hinhkhoicn::~Hinhkhoicn()
{
    this->dai = 0;
    this->rong = 0;
    this->cao = 0;
}

void Hinhkhoicn ::Nhap()
{
    cout << "Nhap chieu dai: ";
    cin >> this->dai;

    cout << "Nhap chieu rong: ";
    cin >> this->rong;

    cout << "Nhap chieu cao: ";
    cin >> this->cao;
}

void Hinhkhoicn::Xuat()
{
    cout << "chieu dai: " << this->dai << endl;

    cout << "chieu rong: " << this->rong << endl;

    cout << "chieu cao: " << this->cao << endl;
}

bool Hinhkhoicn::Kiemtra()
{
    return ((this->dai <= 0 || this->rong <= 0 || this->cao <= 0) ? false : true);
}

bool Hinhkhoicn::KiemTraLapPhuong()
{
    return ((this->dai == this->rong &&this->rong == this->cao) ? true : false);
}

int main()
{
    int size;
    do
    {
        cout << "nhap so luong phan tu: ";
        cin >> size;
    } while (size < 0);

    Hinhkhoicn hk[size];

    for (int i = 0; i < size; i++)
    {
    	cout<<"------------------------"<<endl;
    	
        hk[i].Nhap();
    }
    
    cout<<"========================="<<endl;
    for (int i = 0; i < size; i++)
    {
        if (hk[i].Kiemtra())
        {
            if (hk[i].KiemTraLapPhuong())
            {
                hk[i].Xuat();
            }
        }
    }
}
