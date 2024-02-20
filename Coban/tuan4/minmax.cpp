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
float tb(int a[size][size], int n, int m){
	float tb[m] ;
 	for(int i=0;i<m;i++){
 		float t = 0;
		for(int j=0;j<n;j++){
			t=t+a[i][j];
		}
		tb[i]=t/n;	
		
	}
	float max = tb[0]; 
	int min = tb[0];
	
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
	
	if (min - (int)min > 0.1)
	{
		cout << fixed << setprecision(1) << min << " ";
	}
	else
	{
		cout << (int)min << " ";
	}

	if (max - (int)max > 0.1)
	{
		cout << fixed << setprecision(1) << max;
	}
	else
	{
		cout << (int)max;
	}
 	return 0;
}

int main(){
	int a[100][100], n ,m;
	cin >> m >> n;
	nhap(a,n,m);
	tb(a,n,m);
	return 0;
}