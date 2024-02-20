#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int number;
	cin >> number;
	int tmp = number;
	 
	a = tmp % 10; tmp /= 10;
	b = tmp % 10; tmp /= 10;
	c = tmp % 10; tmp /= 10;
	d = tmp % 10;
	int s1;
	s1 = a+b+c+d;
	cout<<a <<"+" <<b<<"+"<<c<<"+"<<d<<"="<<s1;
}
