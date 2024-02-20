#include<iostream>
#include<string>
using namespace std;


class author{
	public:
		string ten,email;
	public:
		author(){
			ten=' ';
			email=' ';
		}
		author(string,string);
		string getEmail();
		void setEmail(string e);
		string getTen();
		void setTen(string t);
		void nhap();
		
	
};

author::author(string ten,string email){
	this->email=email;
	this->ten = ten;
}

string author::getTen(){
	return this->ten;
}

void author::setTen(string t){
	this->ten=ten;
}

string author::getEmail(){
	return this->email;
}

void author::setEmail(string e){
	this->email=e;
}

void author::nhap(){
	cout<<"nhap ten tac gia: ";
	cin>>this->ten;
	cout<<"nhap email: ";
	cin>>this->email;
	
}
