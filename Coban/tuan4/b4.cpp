#include<bits/stdc++.h>
#define size 100
using namespace std;
void nhap(int a[size][size], int &n, int &m){
//	cin >> n>> m;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
}
void tb(int a[size][size], int n, int m){
	float tb[m] ;
 	for(int i=0;i<m;i++){
 		float t = 0;
		for(int j=0;j<n;j++){
			t=t+a[i][j];
		}
		tb[i]=t/n;	
		
	}
	float max = tb[0], min = tb[0];
	
	for( int i = 0; i < m; i++){
		if(tb[i] < min){
			min = tb[i]; 
		}
		
	
	}
	for( int i = 0; i < m; i++){
		if(tb[i] > max){
			max = tb[i]; 
		}
	
	
	}
	cout <<  min<< " " << max;
	

}

int main(){
	int a[100][100], n ,m;
	cin >> m >> n;
	nhap(a,n,m);
	tb(a,n,m);
	return 0;
}