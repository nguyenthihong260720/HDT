#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int x,y;
	cin >>x>>y;
	if(x ==0 && y>0){
		cout<<1<<" "<<2;
	}else if(x < 0 && y <= 0){
		cout<<2<<" "<<3;
	}else if(x = 0 && y < 0){
		cout<<3<<"="<<4;
	}else if(x>0 && y <=0){
		cout<<4<<" "<<1;
	}else if(x>0 && y>0){
		cout<<1;
	}else if(x<0 && y>0){
		cout<<2;
	}else if(x<0&&y<0){
		cout<<3;
	}else if(x>0&&y<0){
		cout<<4;
	}
}
