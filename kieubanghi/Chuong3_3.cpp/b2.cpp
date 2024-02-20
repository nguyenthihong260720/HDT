#include<iostream>
#include<string>
using namespace std;

int main (){
    
	int c,d;
	string hoten,ten;
	getline(cin,hoten);
	for (int i = hoten.length()-1;i>=1;i--){
		if (hoten[i] == ' ' and hoten[i-1] != ' ' ){
			c = i;
			break;
		}
	}
	for (int i = hoten.length()-1;i>=1;i--){
		if (hoten[i] != ' ' and hoten[i-1] == ' '){
			d = i;
			break;
		}
	}
	
	if (c+1 == d){
		cout << hoten.substr(c+1);
	} else {
		cout << hoten.substr(d,c-1);
	}
}


