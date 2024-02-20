#include<iostream>
#include<math.h>
#define size 100

using namespace std;

void nhap(int a[size][size],int n, int m){
	for(int i = 0 ; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
}
void xuat(int a[size][size],int n, int m){
	for(int i = 0 ; i < n; i++){
		for(int j = 0; j < m; j++){
			cout <<  a[i][j] << " ";
		}
		cout << endl;
	}
}
bool scp(int n){
	int a = sqrt(n);
	if(a*a==n){
		return true;
	}else{
		return false;
	}
}
int dem = 0;
void scp(int a[size][size],int n, int m){
	for(int i = 0 ; i < n; i++){
		for(int j = 0; j < m; j++){
			if(scp(a[i][j])==true){
				dem++;
			}
		}
		cout << endl;
	}
	cout << dem<< endl;
	for(int i = 0 ; i < n; i++){
		for(int j = 0; j < m; j++){
			if(scp(a[i][j] == true)){
				cout << a[i][j]<< " ";
			}
		}
	}	
}

int main(){
	int a[size][size];
	int n,m;
	cin >> n>> m;
	nhap(a,n,m);
	xuat(a,n,m);
	scp(a,n,m);
	return 0;
}
