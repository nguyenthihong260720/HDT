#include<iostream>
#include<string>
#include<math.h>
#include "thietbi.cpp"
using namespace std;
class maytinh:public thietbi{
	public:
		string hangsx;
		long int dolon;
		double tocdo;
	public:
		maytinh():thietbi(){
			hangsx = ' ';
			dolon = 0;
			tocdo = 0;
		}
		maytinh(string hangsx, long int dolon, double tocdo,string name, int nam, double gia);
		void nhap();
		void xuat();
		void sieumt();
};
maytinh::maytinh(string hangsx, long int dolon, double tocdo,string name, int nam, double gia):thietbi(name,nam,gia){
			this -> hangsx = hangsx ;
			this -> dolon = dolon;
			this -> tocdo = tocdo;
}
void maytinh::nhap(){
	thietbi::nhap();
	cin.ignore();
	cout << "Nhap hang san xuat: ";
	getline(cin,this -> hangsx);
	cout << "Nhap do lon : ";
	cin >> 	this -> dolon;
	cout << "Nhap toc do : ";
	cin >> this -> tocdo;
}
void maytinh::xuat(){
	thietbi::xuat();
	cout << this -> hangsx <<" "<< this -> dolon<<" "<<this -> tocdo;
}
void maytinh::sieumt(){
	if(this -> dolon >= pow(10,6)){
		cout << "La sieu may tinh" << endl;
	}else{
		cout <<"Khong là sieu mt" << endl;
	}
}

class dienthoai:public thietbi{
	public:
		string hangsxdt;
		string hedieuhanh;
		double kcmh;
		double weight;
	public:
		dienthoai():thietbi(){
			hangsxdt = ' ';
			hedieuhanh = ' ';
			kcmh = 0;
			weight = 0;
		}
		dienthoai(string ,string ,double ,double ,string, int, double);
		void nhap();
		void xuat();
		void sieunhe();
		
};
dienthoai::dienthoai(string hangsxdt,string hedieuhanh,double kcmh,double weight,string name, int nam, double gia):thietbi(name, nam,gia){
	this -> hangsxdt = hangsxdt;
	this -> hedieuhanh = hedieuhanh;
	this -> kcmh = kcmh;
	this -> weight = weight;
}
void dienthoai::nhap(){
	thietbi::nhap();
	cin.ignore();
	cout << "Nhap hangsxdt : " ;
	getline(cin, this -> hangsxdt);
	cout << "Nhap he dh: ";
	getline(cin, this ->hedieuhanh);
	cout << "Nhap kich thuoc : ";
	cin >> this -> kcmh;
	cout << "Nhap can nang: ";
	cin >> this ->weight;
}
void dienthoai::xuat(){
	thietbi::xuat();
	cout << this ->hangsxdt << " " << this ->hedieuhanh << " " << this ->kcmh << " " <<this -> weight;
}
void dienthoai::sieunhe(){
	if(this ->weight <= 50){
		cout << "La dien thoai sieu nhe"<< endl;
	}else{
		cout << "Khong phai dien thoai sieu nhe" << endl;
	}
}

