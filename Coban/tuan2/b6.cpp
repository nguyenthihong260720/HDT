#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cin>>n;
	float S;
	for (int i = 1;i<=n;i++){
		S += i/float(i+1);
	}
	cout<<fixed<<setprecision(2)<<S;
}
