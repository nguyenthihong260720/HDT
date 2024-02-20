#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float d,x;
	cin>>d;
	cin>>x;
	
	float chuvi = d * 3.14;
	cout<<fixed<<setprecision(1)<<chuvi*3<<endl;;
	
	float dientich = 3.14 * (d/2.0)*(d/2.0);
	int soluongbo = dientich / x;
	cout<<soluongbo;
}
