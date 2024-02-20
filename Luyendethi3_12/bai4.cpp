#include<iostream>
#include<string>
#define size 100
#include "maytinh.cpp"

using namespace std;
int main(){
	dienthoai dt[size];
	maytinh mt[size];
	int n;
	cout << "Nhap so may tinh : ";
	cin >> n;
	int m;
	cout << "Nhap so dien thoai: ";
	cin >> m;
	for(int i = 0 ; i < n; i++){
		cout << "Nhap mt thu : "<< i+1<< endl;
		cin.ignore();
		mt[i].nhap();
	}
	for(int i = 0 ; i < m; i++){
		cout << "Nhap dt thu : "<< i+1<< endl;
		cin.ignore();
		dt[i].nhap();
	}
	for(int i = 0 ; i < n; i++){
		cout << "Nhap mt thu : "<< i+1<< endl;
		cin.ignore();
		mt[i].xuat();
	}
	for(int i = 0 ; i < m; i++){
		cout << "Nhap dt thu : "<< i+1<< endl;
		cin.ignore();
		dt[i].xuat();
	}
	for(int i = 0 ; i < n; i++){
		cout << "Nhap mt thu : "<< i+1<< endl;
		if(mt[i].gia > pow(10,5)){
			mt[i].xuat();
			mt[i].sieumt();
		}
	}
	for(int i = 0 ; i < m; i++){
		cout << "Nhap dt thu : "<< i+1<< endl;
		if(dt[i].gia < pow(10,6)){
			dt[i].xuat();
			dt[i].sieunhe();
		}
	}
	
}
