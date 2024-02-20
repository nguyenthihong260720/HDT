#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
	float C,F;
	cin>>F;
	cin>>C;
		C = (F -32)/1.8;

	cout<<fixed<<setprecision(2)<<C<<"\n";
		F = (1.8 * C) + 32;
	cout<<fixed<<setprecision(2)<<F;
}
