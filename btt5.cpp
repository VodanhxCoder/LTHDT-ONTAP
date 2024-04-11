#include<iostream>
using namespace std;

class TS{
	private:
		string SBD;
		string ngaysinh;
		string khuvuc;
	public:
		void nhapTS();
		void xuatTS();
};

void TS::nhapTS(){
	cout<<"nhap SBD: ";
	getline(cin, this->SBD);
	cout<<"nhap ngay sinh: ";
	getline(cin, this->ngaysinh);
	cout<< "nhap khu vuc: ";
	getline(cin, this->khuvuc);	
}

void TS::xuatTS(){
	cout<<"SBD: "<<this->SBD<<endl;
	cout<<"ngaysinh: "<<this->ngaysinh<<endl;
	cout<<"khuvuc: "<<this->khuvuc<<endl;
}

class TSA:public TS {
	private:
		float DT,DL,DH;
	public:
		void nhapTSA();
		void xuatTSA();
};

void TSA::nhapTSA(){
	this->TS::nhapTS();
	cout<< "DT: ";
	cin>>this->DT;
	cout<< "DL: ";
	cin>>this->DL;
	cout<< "DH: ";
	cin>>this->DH;
}

void TSA::xuatTSA(){
	this->TS::xuatTS();
	cout<<"DT: "<<this->DT<<endl;
	cout<<"DL: "<<this->DL<<endl;
	cout<<"DH: "<<this->DH<<endl;
}

class TSC:public TS {
	private:
		float DV,DS,DD;
	public:
		void nhapTSC();
		void xuatTSC();	
};

void TSC::nhapTSC(){
	this->TS::nhapTS();
	cout<< "DV: ";
	cin>>this->DV;
	cout<< "DS: ";
	cin>>this->DS;
	cout<< "DD: ";
	cin>>this->DD;
}

void TSC::xuatTSC(){
	this->TS::xuatTS();
	cout<<"DV: "<<this->DV<<endl;
	cout<<"DS: "<<this->DS<<endl;
	cout<<"DD: "<<this->DD<<endl;
}

int main() {
	TSA TS1;
	TS1.nhapTSA();
	TS1.xuatTSA();
	
	TSC TS2;
	TS2.nhapTSC();
	TS2.xuatTSC();

	return 0;
}

