#include<iostream>
#include<math.h>
#include<iomanip>
#include<stdio.h>

using namespace std;
int main()
{
	float g,v,h;
	cin>>h;
	g = 9.8;
	v = float(sqrt(2*g*h));
	cout<<fixed<<setprecision(2)<<v;
	
	return 0;
}
