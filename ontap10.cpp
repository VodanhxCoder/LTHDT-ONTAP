#include <iostream>
#include<string.h>

using namespace std;

class SACH{
	private: 
		string Masach,Tensach,Maloai;
	public: 
		SACH();
		SACH(string Masach,string Tensach,string Maloai);
		~SACH();
		void Nhap();
		void Xuat();
		bool Thuoc(string Loai);
};

SACH::SACH(string Masach,string Tensach,string Maloai){
	this->Masach=Masach;
	this->Tensach=Tensach;
	this->Maloai=Maloai;
}

SACH::SACH(){
	this->Masach="";
	this->Tensach="";
	this->Maloai="";
}
SACH::~SACH(){
	this->Masach="";
	this->Tensach="";
	this->Maloai="";
}

void SACH::Nhap(){
	cout<<"Nhap Ma sach: ";
	fflush(stdin);
	getline(cin,this->Masach);
	
	cout<<"Nhap Ten sach: ";
	getline(cin,this->Tensach);
	
	cout<<"Nhap Loai sach: ";
	getline(cin,this->Maloai);
	
}

void SACH::Xuat(){
	cout<<"- Ma sach: "<<this->Masach<<endl;
	cout<<"- Ten sach: "<<this->Tensach<<endl;
	cout<<"- Loai sach: "<<this->Maloai<<endl;
}

bool SACH::Thuoc(string Loai){
	if(this->Maloai.compare(Loai)==0)
		return true;
	else
		return false;
}

int main(){
	int n;
	string Loai="CONG NGHE";
	do{
		cout<<"Nhap so luong phan tu: ";
		cin>>n;
	}while(n<=0);
	
	SACH s[n];
	for(int i=0;i<n;i++){
		cout<<"Nhap tt sach thu "<<i+1<<":"<<endl;
		s[i].Nhap();
	}
	cout<<"Danh sach sach thuoc loai 'CONG NGHE': "<<endl;
	for(int i=0;i<n;i++){
		if(s[i].Thuoc(Loai))
			s[i].Xuat();
	}
	
}
