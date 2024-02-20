#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n<2){
		cout<<"Khong";
		return 0;
	}
	for(int i=2;i<n-1;i++){
		if(n%i==0){
			cout<<"Khong";
			return 0;
		}
	}
	cout<<"Co";
	
	
}
