#include<iostream>
#include"student.cpp"
#define size 100
using namespace std;
int main(){
	student s[size];
	int n;
	cout << "Nhap so luong sinh vien : ";
	cin >> n;
	for(int i = 0 ; i<n; i++){
		cout << "Hoc sinh thu : " << i+1<< endl;
		s[i].nhap();
		cout << endl;
	}
	for(int i = 0 ; i<n; i++){
		cout << "Hoc sinh thu : " << i+1<< endl;
		s[i].xuat();
		cout << endl;
	}
	for(int i = 0 ; i<n; i++){
		cout << "Diem trung binh cua sinh vien thu : " << i+1<< ":"<< s[i].TB()<<endl;
		
	}
}

