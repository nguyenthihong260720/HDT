#include<iostream>
#include<string>
using namespace std;
class color{
	public:
		string ten;
		int ma;
	public:
		color(){
			ten = ' ';
			ma = ' ';
		}
		color(string ten,int ma){
			this -> ten = ten;
			this -> ma = ma;
		}
		void nhap();
		void xuat();
		string gettenmau(){
			return this->ten;
		}
};
void color::nhap(){
	cout << "Nhap ten : ";
	getline(cin, this->ten);
	cout << "Nhap ma : ";
	cin >> this->ma;
}
void color::xuat(){
	cout << "Ten mau : " << this->ten << endl;
	cout << "Ma mau : " << this->ma << endl;
}

class point{
	public:
		int x; int y;
	public:
		point(){
			x=0;
			y = 0;
		}
		point(int x, int y){
			this -> x = x;
			this -> y = y;
		}
		void nhap();
		void xuat();
		bool cheochinh();
	
};
void point::nhap(){
	cout << "Nhap x = ";
	cin >> this->x;
	cout << "Nhap y = ";
	cin >> this->y;
}
void point::xuat(){
	cout << "x = "<< this->x<< endl;
	cout << "y = "<< this->y << endl;
}
bool point::cheochinh(){
	if(this->x==this->y){
		return true;
	}else{
		return false;
	}
}
