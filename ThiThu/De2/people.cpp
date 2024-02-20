#include<iostream>
#include<string>
using namespace std;
class People{
	public:
		string name;
		int age;
		string address;
	public:
		People(){
			name = ' ';
			age = 0;
			address = ' ';
		};
		People(string name, int age, string address);
		void nhap();
		void xuat();
};
People::People (string name, int age, string address){
	this -> name = name;
	this -> age = age;
	this -> address = address;
}
void People::nhap(){
	
	cout << "Nhap name : ";
	cin >> name;
	cout << "Nhap age : ";
	cin >> age;
	cout << "Nhap address : ";
	cin >> address;
}
void People::xuat(){
	cout << "Ten : " << name <<endl;
	cout << "Age : " << age << endl;
	cout << "Address : " << address << endl;
}
