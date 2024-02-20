#include<iostream>
#include<string>
#define size 100
#include"Student.cpp"
using namespace std;
int main(){
	int n;
	cout << "Nhap so sinh vien: ";
	cin >> n;
	student sv[100];
	for(int i = 0; i< n;i++){
		cout << "Sinh vien thu : "<< i+1<< endl;
		sv[i].nhap();
	}
	for(int i = 0; i< n;i++){
		cout << "Sinh vien thu : "<< i+1<< endl;
		sv[i].xuat();
	}
	for(int i = 0; i< n;i++){
		cout << "Sinh vien thu : "<< i+ 1<< sv[i].diemTB()<< endl;
		
	}
}
