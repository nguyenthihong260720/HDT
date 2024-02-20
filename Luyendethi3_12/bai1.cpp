#include<iostream>
#define size 100
using namespace std;
int main(){
	int n; // so luong so nguyen can nhap
	cin >> n;
	int a[100];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cout << a[i] << " "  ;
		
	}
	// a
	int x;
	cout << "\nNhap so nguyen x = ";
	cin >> x;
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			dem++;
		}
	}

	cout << "So lan xuat hien : "<< dem << endl;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			cout << " so chan : " << a[i] << " " << endl ;
		}
		else{
			cout << "so le : " << a[i] << " "  << endl;
		}
	}
	bool sonto = true;
	for(int i = 2; i < n; i++){
		if(i % a[i] == 0){
			sonto = false;
			break;
		}
	}
	for(int i = 2; i < n; i++){
		if(sonto){
			cout << " so nguyen to " << a[i] << endl;
		}else{
			cout << "Khong phai so nguyen to " << a[i] << endl;
		}
	}
	return 0;
}
