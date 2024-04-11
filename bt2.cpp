#include<iostream>
using namespace std;

class tamgiac{
	private:
		float Canh1;
		float Canh2;
		float Canh3;
	public:
		tamgiac();
		tamgiac(float canh1, float canh2, float canh3);
		~tamgiac();
		void Nhap();
		void Xuat();
		bool KiemTra();
};
tamgiac::tamgiac() {
	this->Canh1=0;
	this->Canh2=0;
	this->Canh3=0;
}
tamgiac::tamgiac(float canh1, float canh2, float canh3) {
	this->Canh1=canh1;
	this->Canh2=canh2;
	this->Canh3=canh3;
}
tamgiac::~tamgiac() {
}
void tamgiac::Nhap() {
	cout << "Nhap do dai canh thu nhat: ";
	cin >> this->Canh1;
	cout << "Nhap do dai canh thu hai: ";
	cin >> this->Canh2;
	cout << "Nhap do dai canh thu ba: ";
	cin >> this->Canh3;
}
void tamgiac::Xuat() {
	cout << "Do dai canh thu nhat: " << this->Canh1 << endl;
	cout << "Do dai canh thu hai: " << this->Canh2 << endl;
	cout << "Do dai canh thu ba: " << this->Canh3 << endl;
}
bool tamgiac::KiemTra() {
	if(this->Canh1>0 && this->Canh2>0 && this->Canh3>0) {
		if(this->Canh1+this->Canh2>this->Canh3 && this->Canh2+this->Canh3>this->Canh1 && this->Canh3+this->Canh1>this->Canh2)
		return true;
		else
		return false;
	}
	else
	return false;
}
int main() {
	int i, n;
	do{
		cout << "Nhap so luong tam giac: ";
		cin >> n;
	}
	while(n<=0);
	tamgiac tg[n];
	for(i=0; i<n; i++) {
		cout << "Nhap thong tin tam giac " << i+1 << ":" << endl;
		tg[i].Nhap();
	}
	for(i=0; i<n; i++) {
		if(tg[i].KiemTra()) {
			cout << "Thong tin tam giac " << i+1 << ":" << endl;
			tg[i].Xuat();
		}
	}
}