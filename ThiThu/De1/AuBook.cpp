#include<iostream>
#include<string>
#define size 100
#include"bookkt.cpp"
using namespace std;

int main(){
	book b[size];
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"sach thu "<<i+1<<endl;
		b[i].nhap();
		cout<<endl;
	}
	int max=0,vitri;
	for(int i=0;i<n;i++){
		if(b[i].getGia()>max){
			max=b[i].getGia();
			vitri=i;
		}
	}
	cin.ignore();
	cout<<"ten sach: "<<b[vitri].getTenSach()<<endl;
	cout<<"gia: "<<max<<endl;
	cout<<"ten tac gia: "<<b[vitri].getTen()<<endl;
	cout<<"email: "<<b[vitri].getEmail()<<endl;
	
}
