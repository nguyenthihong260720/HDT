#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n<2){
		cout<<"Khong";
	}else{
		int i =1;
		int p =1 ;
		for(int i = 2;i<=sqrt(n);i++){
			for(n%i==0){
				mark == 0;
				break;	
			}
		}
		if(mark == 1){
			cout<<"Khong";
		}
		else{
			cout<<"Co";
		}
			
		}
	}
}
