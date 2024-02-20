#include<iostream>
#include<string>
#include"Authorkt.cpp"
using namespace std;


class book:public author{
	public:
		string tensach;
		int gia;
	public:
		book():author(){
			tensach=' ';
			gia=0;
		}
		book(string,int,string,string);
		string getTenSach();
		void setTenSach(string te);
		int getGia();
		void setGia(int g);
		string GetAuthorName();
		void nhap();
	
};

book::book(string tensach,int gia,string ten,string email):author(ten,email){
	this->tensach=tensach;
	this->gia=gia;
}
string book::getTenSach(){
	return this->tensach;
}

void book::setTenSach(string te){
	this->tensach=te;
}

int book::getGia(){
	return this->gia;
}
void book::setGia(int g){
	this->gia=g;
}
string book::GetAuthorName(){
	return this->ten;
}

void book::nhap(){
	cout<<"nhap ten sach: ";
	cin>>this->tensach;
	cout<<"nhap gia: ";
	cin>>this->gia;
	author::nhap();

}

