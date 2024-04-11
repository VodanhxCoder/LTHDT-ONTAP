#include<iostream>
#include<string.h>

using namespace std;


class PhuongTienGiaoThong{
	private: 
		string Hangsx,Tenpt;
	    int Namsx;
		float vtmax;
	public: 
		PhuongTienGiaoThong();
		PhuongTienGiaoThong(string Hangsx,string Tenpt, int Namsx, float vtmax);
	
	void Nhap();
	void Xuat();
	 bool operator>(const PhuongTienGiaoThong& pt);
	~PhuongTienGiaoThong();
};

PhuongTienGiaoThong::PhuongTienGiaoThong(string Hangsx,string Tenpt, int Namsx, float vtmax){
	this->Hangsx=Hangsx;
	this->Tenpt=Tenpt;
	this->Namsx=Namsx;
	this->vtmax=vtmax;
}
PhuongTienGiaoThong::PhuongTienGiaoThong(){
	this->Hangsx="";
	this->Tenpt="";
	this->Namsx=0;
	this->vtmax=0;
}
PhuongTienGiaoThong::~PhuongTienGiaoThong(){
	this->Hangsx="";
	this->Tenpt="";
	this->Namsx=0;
	this->vtmax=0;
}

void PhuongTienGiaoThong::Nhap()
{
	cout<<"Nhap Hang SX: ";
	cin.ignore();
	getline(cin,this->Hangsx);
	
	cout<<"Nhap Ten Phuong Tien: ";
	getline(cin,this->Tenpt);
	
	cout<<"Nhap NamSX: ";
	cin>>this->Namsx;
	
	cout<<"Nhap Van Toc toi da: ";
	cin>>this->vtmax;
}

void PhuongTienGiaoThong::Xuat(){
	cout<<"- Hang SX: "<<this->Hangsx<<endl;
	cout<<"- Ten Phuong Tien: "<<this->Tenpt<<endl;
	cout<<"- NamSX: "<<this->Namsx<<endl;
	cout<<"- Van Toc toi da: "<<this->vtmax<<endl;
}

bool PhuongTienGiaoThong::operator>(const PhuongTienGiaoThong &pt){
	if(this->vtmax>pt.vtmax){
		return true;
	}
	else return false;
	
	
}

int main(){
	int n;
	
	do{
		cout<<"Nhap so luong phan tu: ";
		cin>>n;
	}while(n<=0);
	
	PhuongTienGiaoThong pt[n];
	cout<<"Nhap TT: "<<endl;
	for(int i=0;i<n;i++){
		cout<<"Nhap tt phuong tien thu "<<i+1<<": "<<endl;
		pt[i].Nhap();
	}
	
	cout<<"danh sach phuong tien sau khi sap xep: "<<endl;
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
		if(pt[i]>pt[j])
		{
			PhuongTienGiaoThong tg=pt[i];
			pt[i]=pt[j];
			pt[j]=tg;
		}
	}
	}
	for(int i=0;i<n;i++){
		pt[i].Xuat();
	}
}
