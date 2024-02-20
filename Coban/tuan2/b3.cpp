#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	float max= a;
	if(b> max){
		max = b;
	}
	if(c> max){
		max = c;
	}
	if(d> max){
		max = d;
	}
	if(e> max){
		max = e;
	}
	float min = a;
	float max2 = min ;
	if (a > max2 && a != max) {
		max2 = a;
	}
	if (b > max2 && b != max) {
		max2 = b;
	}
	if (c > max2 && c != max) {
		max2 = c;
	}
	if (d > max2 && d != max) {
		max2 = d;
	}
	if (e > max2 && e != max) {
		max2 = e;
	}
	cout<<max2;
}
