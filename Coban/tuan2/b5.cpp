#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;

	while(a!=b){
	
		if(a>b){
			a = a % b;
		}else{
			b = b % a;
		}
	}
	if(a == 0){
		cout<<b<<endl;
	}else {
		cout<<a <<endl;
	}
}
