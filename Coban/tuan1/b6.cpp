#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
	float a,b,c;
	cin>>a>>b>>c;
	float S1,S2,S3,S4;
	S1 = (a*a)-2*b+((a*b)/(c*c+3));
	S2 =( (b*b)- (4*a*c))/(2*a);
	S3 = 3*a - b*b*b + 2 * sqrt(c*c+1);
	S4 = sqrt((a*a)/b-(4*a)/(b*c)+1);
	cout<<fixed<<setprecision(3)<<S1<<"\n"<<S2<<"\n"<<S3<<"\n"<<S4;
}
