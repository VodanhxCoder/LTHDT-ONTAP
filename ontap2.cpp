#include <iostream>
#include <string>

using namespace std;

class Tamgiac
{
private:
    float canh1, canh2, canh3;

public:
    Tamgiac(float _canh1, float _canh2, float _canh3);
    Tamgiac();
    void Nhap();
    void Xuat();
    bool Kiemtra();
    ~Tamgiac();
};

Tamgiac::Tamgiac(float _canh1, float _canh2, float _canh3)
{
    this->canh1 = _canh1;
    this->canh2 = _canh2;
    this->canh3 = _canh3;
}
Tamgiac::Tamgiac()
{
    this->canh1 = 0;
    this->canh2 = 0;
    this->canh3 = 0;
}
Tamgiac::~Tamgiac()
{
    this->canh1 = 0;
    this->canh2 = 0;
    this->canh3 = 0;
}

void Tamgiac::Nhap()
{
    do
    {
        cout << "Nhap canh 1: ";
        cin >> this->canh1;

        cout << "Nhap canh 2: ";
        cin >> this->canh2;

        cout << "Nhap canh 3: ";
        cin >> this->canh3;

        cout << "---------------------------------" << endl;
    } while (this->canh1 <= 0 || this->canh2 <= 0 || this->canh3 <= 0 && printf("Loi: (Canh>0) \n"));
}

void Tamgiac::Xuat()
{
    cout << "-canh 1: " << this->canh1 << endl;

    cout << "-canh 2: " << this->canh2 << endl;

    cout << "-canh 3: " << this->canh3 << endl;
}

bool Tamgiac::Kiemtra()
{
    return ((this->canh1 + this->canh2 > this->canh3 &&
             this->canh2 + this->canh3 > this->canh1 &&
             this->canh3 + this->canh1 > this->canh2)
                ? true
                : false);
}

int main()
{
    int size;

    do
    {
        cout << "nhap so luong phan tu: ";
        cin >> size;
    } while (size <= 0);

    Tamgiac tg[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ":" << endl;
        tg[i].Nhap();
    }
    cout << "Cac tam giac: " << endl;

    for (int i = 0; i < size; i++)
    {
        if (tg[i].Kiemtra())
        {
            tg[i].Xuat();
            cout << "---------------------------------" << endl;
        }
    }
}
