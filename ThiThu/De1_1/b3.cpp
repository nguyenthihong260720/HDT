#include<iostream>
#include<string>
#include"pixel.cpp"
#define size 100
using namespace std;
int main(){
	int n;
	cout << "Nhap so pixel : ";
	cin >> n;
	pixel p[100];
	for(int i = 0; i < n; i++){
		cin.ignore();
		p[i].nhap();
	}
	for(int i = 0; i < n; i++){
		cin.ignore();
		p[i].xuat();
	}
	for(int i = 0; i< n; i++){
		if(p[i].kiemtra() == true){
			p[i].xuat();
		}
	}
}
