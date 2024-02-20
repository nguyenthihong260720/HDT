#include<iostream>
#include "personkt.cpp"
#include "studentkt.cpp"
#include "Professor.cpp"
	int n;
	Person nguoi[n];
	void ds(nguoi[n]){
		cout << "Nhap so luong nguoi: ";
		cin >> n;
		
		for(int i = 0 ; i< n; i++){
			cout << "Chon loai nguoi: ";
			int loainguoi;
			cin >> loainguoi;
			
			if(loainguoi == 1){
				nguoi[i].Student();
				nguoi[i].nhap();
			}else if (loainguoi == 2){
				nguoi[i].Professor();
				nguoi[i].nhap();
			}else{
				cout << "Loai nguoi khong hop le! ";
			}
		}
	}

	
