#include<iostream>
#include<string>
#include"people.cpp"
using namespace std;

class student:public People{
	public:
		int msv;
		float toan;
		float ly;
		float hoa;
	public:
		student():People(){
			msv = 0;
			toan = 0;
			ly = 0;
			hoa = 0;
		}
		student(int msv, float toan, float ly, float hoa,string name, int age, string address);
		void nhap();
		float TB();
		void xuat();
};
student::student(int msv, float toan, float ly, float hoa,string name, int age, string address):People( name,age,address){
	this -> msv = msv;
	this -> toan = toan;
	this -> ly = ly;
	this -> hoa = hoa;
}
void student::nhap(){
	People::nhap();
	cin.ignore();
	cout << "Nhap msv : ";
	cin >> msv;
	cout << "Nhap toan : ";
	cin >> toan;
	cout << "Nhap ly : ";
	cin >> ly;
	cout << "Nhap hoa : ";
	cin >> hoa;
	
}
float student::TB(){
	return ( toan + ly + hoa )/3;
}
void student::xuat(){
	People::xuat();
	cout << "Msv : " << msv << endl;
	cout << "Toan : " << toan << endl;
	cout << "Ly : " << ly << endl;
	cout << "Hoa : " << hoa << endl;
	
}
