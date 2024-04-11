#include<iostream>
#include<string.h>
#include<string>

using namespace std;

class HANGHOA{
	private:
		string Mahang;
		string Tenhang;
		string Maloai;
		
	public:
		HANGHOA();
		HANGHOA(string Mahang,string Tenhang,string Maloai);
		~HANGHOA();
		friend istream &operator>>(istream &is,HANGHOA &hh);
		friend ostream &operator<<(ostream &os,const HANGHOA &hh);
		bool Thuoc(string Loai);
};

HANGHOA::HANGHOA(string Mahang,string Tenhang,string Maloai)
{
	this->Mahang=Mahang;
	this->Tenhang=Tenhang;
	this->Maloai=Maloai;
}
HANGHOA::HANGHOA()
{
	this->Mahang="";
	this->Tenhang="";
	this->Maloai="";
}
HANGHOA::~HANGHOA()
{
	this->Mahang="";
	this->Tenhang="";
	this->Maloai="";
}
istream &operator>>(istream &is,HANGHOA &hh){
	cout<<"Nhap Ma hang: ";
	is.ignore();
	getline(is,hh.Mahang);
	
	cout<<"Nhap Ten hang: ";

	getline(is,hh.Tenhang);
	
	cout<<"Nhap Loai hang: ";
	
	getline(is,hh.Maloai);
	return is;
}

ostream &operator<<(ostream &os,const HANGHOA &hh)
{
	cout<<"- Ma hang: "<<hh.Mahang<<endl;
	
	cout<<"- Ten hang: "<<hh.Tenhang<<endl;
	
	cout<<"- Loai hang: "<<hh.Maloai<<endl;
	return os;
}
bool HANGHOA::Thuoc(string Loai){
	if(this->Maloai.compare(Loai)==0)
		{
			return true;
		}
		else
			return false;
}

int main(){
	int n;
	
	do{
		cout<<"Nhap so luong phan tu: ";
		cin>>n;
	}while(n<=0);
	HANGHOA hh[n];
	for(int i=0;i<n;i++){
		cout<<"Nhap tt hnag hoa thu "<<i+1<<":"<<endl;
		cin>>hh[i];
	}
	cout<<"Danh sach phan tu thuoc loai CONG NGHE: "<<endl;
	string Loai="CONG NGHE";
	for(int i=0;i<n;i++){
		if(hh[i].Thuoc(Loai)==true){
			cout<<hh[i];
		}
			
	}
	return 0;
}
