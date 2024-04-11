#include<iostream> 
#include<string.h>

using namespace std;

class DichVu{
	private: 
		string Madv,Tendv;
		float Giacuoc;
	public: 
		DichVu();
		DichVu(string Madv,string Tendv,float Giacuoc);
		~DichVu();
		void Nhap();
		void Xuat();
		float Laygiacuoc();
}; 

DichVu::DichVu(string Madv,string Tendv,float Giacuoc){
	this->Madv=Madv;
	this->Tendv=Tendv;
	this->Giacuoc=Giacuoc;	
}
DichVu::DichVu(){
	this->Madv="";
	this->Tendv="";
	this->Giacuoc=0;	
}

DichVu::~DichVu(){
	this->Madv="";
	this->Tendv="";
	this->Giacuoc=0;	
}

void DichVu:: Nhap(){
	cout<<"Nhap Ma DV: ";
	fflush(stdin);
	getline(cin,this->Madv);
	
	cout<<"Nhap Ten DV: ";
	fflush(stdin);
	getline(cin,this->Tendv);
	
	cout<<"Nhap Gia cuoc DV: ";
	cin>>this->Giacuoc;
}

void DichVu:: Xuat(){
	cout<<"Nhap Ma DV: "<<this->Madv<<endl;
	
	cout<<"Nhap Ten DV: "<<this->Tendv<<endl;
	
	cout<<"Nhap Gia cuoc DV: "<<this->Giacuoc<<endl;
}

float DichVu::Laygiacuoc()
{
	return this->Giacuoc;
}

class KhachHang{
	private: 
		string MaKH;
		string TenKH;
		int SoLuongDV;
		DichVu dv[100];
	public:
		KhachHang();
		KhachHang(string MaKH,string TenKH,int SoLuongDV);
		~KhachHang();
		void Nhap();
		void Xuat();
		float TongGiaCuoc();
		
};

KhachHang::KhachHang(string MaKH,string TenKH,int SoLuongDV)
{
	this->MaKH=MaKH;
	this->TenKH=TenKH;
	this->SoLuongDV=SoLuongDV;
}

KhachHang::KhachHang()
{
	this->MaKH="";
	this->TenKH="";
	this->SoLuongDV=0;
	
}
KhachHang::~KhachHang()
{
	this->MaKH="";
	this->TenKH="";
	this->SoLuongDV=0;
}

void KhachHang::Nhap(){
	cout<<"Nhap ma KH: ";
	fflush(stdin);
	getline(cin,this->MaKH);
	
	cout<<"Nhap Ten KH: ";
	fflush(stdin);
	getline(cin,this->TenKH);
	
	do{
		cout<<"Nhap So luong dich vu: ";
	cin>>this->SoLuongDV;
	}while(this->SoLuongDV<=0);
	
	for(int i=0;i<this->SoLuongDV;i++){
		dv[i].Nhap();
	}
}
void KhachHang::Xuat(){
	cout<<"- ma KH: "<<	this->MaKH<<endl;
	
	cout<<"- Ten KH: "<<this->TenKH<<endl;
	
	cout<<"- So luong dich vu: "<<this->SoLuongDV<<endl;
}

float KhachHang::TongGiaCuoc(){
	float tongcuoc=0;
	for(int i=0;i<this->SoLuongDV;i++){
		tongcuoc=tongcuoc+(dv[i].Laygiacuoc());
	}
	return tongcuoc;
}

int main(){
	int n;
	do{
		cout<<"Nhap so luong khach hang:";
		cin>>n;
	}while(n<=0);
	
	KhachHang kh[n];
	for(int i=0;i<n;i++){
		kh[i].Nhap();
	}
		for(int i=0;i<n;i++){
		kh[i].Xuat();
		cout<<"Tong gia cuoc: "<<kh[i].TongGiaCuoc()<<endl;
		
	}
}


