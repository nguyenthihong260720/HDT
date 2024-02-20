#include<iostream>
#include<string>
using namespace std;
class people{
	public:
		string name;
		int age;
		string address;
	public:
		people(){
			name = ' ';
			age = 0;
			address = ' ';
		};
		people(string, int,string);
		void nhap();
		void xuat();
};
people::people(string name, int age,string address){
	this -> name = name;
	this -> age = age;
	this -> address = address;
}
void people::nhap(){
	cin.ignore();
	cout << "Nhap ten : ";
	getline(cin,this->name) ;
	cout << "Nhap tuoi: ";
	cin >> this->age;
	cin.ignore();
	cout << "Nhap address: ";
	getline(cin, this->address);
}
void people::xuat(){
	cout << this->name<< " "<< this->age<<" " << this->address << endl;
}
