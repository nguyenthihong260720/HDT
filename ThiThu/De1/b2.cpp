#include<iostream>
using namespace std;
class PhanSo{
	// ham khong tham so
	int n = 0;
	int d = 1;
	// ham tham so
	PhanSo(int, int);
	PhanSo(PhanSo &f);
	PhanSo operator+(PhanSo);
	friend istream &operator >> (istream &is, PhanSo &f);
	friend ostream &operator << (ostream &os, PhanSo &f);
	void display();
};
PhanSo::PhanSo(int n, int d){
	this -> n = n;
	this -> d = d;
}
PhanSo::PhanSo(PhanSo &f){
	this -> n = f.n;
	this -> d = f.d;
}
PhanSo::operator+(PhanSo &f){
	PhanSo tmp;
	tmp.n = n * f.d + d * f.n;
	tmp.d = d * f.d;
	return tmp;
}
istream &operator>>(istream &is, PhanSo &f){
	cout << "Nhap n =";
	is >> f.n;
	cout << "Nhap d = ";
	is >> f.d;
}
ostream &operator<<(ostream &os, PhanSo &f){
	os << f.n << "/" << f.d << endl;
}
void display(){
	cout << n << "/" << d << endl;
}
int main(){
	PhanSo A(1,2);
	PhanSo B(4,5);
	PhanSo C;
	cout << "A = ";
	A.display();
	cout << "B = ";
	B.display();
	C = A + B;
	C.display();
}
	

