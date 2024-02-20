#include<iostream>
#include<string>
using namespace std;
class thietbi{
	public:
		string name;
		int nam;
		double gia;
	public:
		thietbi(){
			name = ' ';
			nam = 0;
			gia = 0;
		}
		thietbi(string name, int nam, double gia){
			this -> name = name ;
			this -> nam = nam;
			this -> gia = gia;
		}
		void nhap();
		void xuat();
		
};
void thietbi::nhap(){
	cout << "Nhap ten thiet bi : ";
	getline(cin, this ->name);
	cout << "Nhap nam sx: ";
	cin >> this ->nam;
	cout << "Nhap gia: ";
	cin >> this ->gia;
}
void thietbi::xuat(){
	cout << this ->name <<" "<< this ->nam<< " "<< this ->gia<< endl;
}
