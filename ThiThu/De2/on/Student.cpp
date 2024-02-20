#include<iostream>
#include<string>
#include"people.cpp"
using namespace std;
class student:public people{
	public:
		int msv;
		float toan;
		float hoa;
		float ly;
	public:
		student():people(){
			msv = 0;
			toan = 0;
			ly = 0;
			hoa = 0;
		};
		student(int, float, float, float, string, int, string);
		void nhap();
		void xuat();
		float diemTB();
};
student::student(int, float, float, float, string, int, string):people(name,age,address){
	this->msv = msv;
	this->toan = toan;
	this->ly = ly;
	this->hoa = hoa;
}
void student::nhap(){
	people::nhap();
	cout <<"Nhap msv : ";
	cin >> this->msv;
	cout <<"Nhap toan = ";
	cin >> this->toan;
	cout << "Nhap ly = ";
	cin >> this->ly;
	cout << "Nhap hoa = ";
	cin >> this->hoa;
}
void student::xuat(){
	people::xuat();
	cout << msv << " " << toan << " "<< ly<<" "<< hoa << endl;
}
float student::diemTB(){
	return (toan + ly + hoa)/3;
}

