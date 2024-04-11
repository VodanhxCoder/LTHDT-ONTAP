#include<iostream>
#include<string.h>

using namespace std;
 class Nguoi{
 	 private: 
 	 	string Madd;
		string hoten;
 	public: 
 		Nguoi();
 		Nguoi(string Madd,string hoten);
 		~Nguoi();
 		friend istream &operator>>(istream &is, Nguoi &ng);
 		friend ostream &operator<<(ostream &os,const Nguoi &ng);
 		
 				
 };
 
 Nguoi::Nguoi(string Madd,string hoten){
 	this->Madd=Madd;
 	this->hoten=hoten;
 }
 
  Nguoi::Nguoi(){
 	this->Madd="";
 	this->hoten="";
 }
 
  Nguoi::~Nguoi(){
 	this->Madd="";
 	this->hoten="";
 }
 
 istream &operator>>(istream &is, Nguoi &ng){
 	cout<<"Nhap Ma dinh danh: ";
 	fflush(stdin);
 	getline(is,ng.Madd);
 	
 	cout<<"Nhap Ho Ten: ";
 	getline(is,ng.hoten);
 	
 	return is;
 }
 
  ostream &operator<<(ostream &os,const Nguoi &ng){
 	cout<<"- Ma dinh danh: "<<ng.Madd<<endl;
 	cout<<"- Ho Ten: "<<ng.hoten<<endl;
 	return os;
 }
 
 int main(){
 	int n;
 	do{
 		cout<<"Nhap so luong phan tu: ";
 		cin>>n;
	 }while(n<=0);
	 
	 Nguoi ng[n];
	 
	 cout<<"Nhap TT: "<<endl;
	 for(int i=0;i<n;i++){
	 	cout<<"Nhap TT nguoi thu "<<i+1<<": "<<endl;
	 	cin>>ng[i];
	 }
	 cout<<"Danh sach vua nhap:"<<endl;
	 for(int i=0;i<n;i++){
	 	cout<<"---------------------"<<endl;
	 	cout<<ng[i];
	 }
 }
 
 

 	

 
 
