#include<iostream>
#include<math.h>
#include"thietbi.cpp"
using namespace std;
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
		void hienthi();
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
	cout << "Nhap hangsxdt : " ;
	getline(cin, hangsxdt);
	cin.ignore();
	cout << "Nhap he dh: ";
	getline(cin, hedieuhanh);
	cout << "Nhap kich thuoc : ";
	cin >> kcmh;
	cout << "Nhap can nang: ";
	cin >> weight;
}
void dienthoai::hienthi(){
	thietbi::xuat();
	cout << hangsxdt << " " << hedieuhanh << " " << kcmh << " " << weight;
}
void dienthoai::sieunhe(){
	if(weight <= 50){
		cout << "La dien thoai sieu nhe"<< endl;
	}else{
		cout << "Khong phai dien thoai sieu nhe" << endl;
	}
}

