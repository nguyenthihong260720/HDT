#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	if(a<0){
		cout<<"So nguyen am"<<endl;
		if(a%2==0){
			cout<<"So chan";
		}else{
			cout<<"So le";
		}
	
	}else if(a == 0) {
		cout<<"Khong duong khong am"<<endl;
		cout<<"So chan";
	}else{
		cout<<"So nguyen duong"<<endl;;
		if(a%2 == 0){
			cout<<"So chan"<<endl;
		}else{
			cout<<"So le"<<endl;
		}
	}
	
}
