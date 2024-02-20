#include<iostream>
#include<math.h>
using namespace std;

int main () {
	int n,m,k;
	cin >> m >> n;
	cin >> k;
	int a[m][n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n;j++){
			cin >> a[i][j];
		}
	}
	if (k > m-1) {
		cout << "-1 -1";
	} else {
		int max = a[k][0],min = a[k][0];
		for (int i = 0; i < n; i++) {
			if (a[k][i] >= max){
				max = a[k][i];
			}
			if (a[k][i] <= min) {
				min = a[k][i];
			}
		}
		cout << min << " " << max;
	}
}