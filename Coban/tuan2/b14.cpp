#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	do{
		cin >> a;
	}while(a<0 || a>12);
	cin >> b;
	switch (a){
		case 1:
			if(a==1) cout << "31";
			break;
		case 2:
			if(a==2){
				if((b%4==0 && b%100 !=0) || b%400==0 ){
					cout <<"29";
				}else{
				
				cout <<"28";}
			}
		break;
		case 3:
			if(a==3) cout <<"31";
		    break;
		case 4:
			if(a==4) cout <<"30";
		    break;
		case 5:
			if(a==5) cout <<"31";
		    break;	
		case 6:
			if(a==6) cout <<"30";
		    break;
		case 7:
			if(a==7) cout <<"31";
		    break;
		case 8:
			if(a==8) cout <<"31";
		    break;
		case 9:
			if(a==9) cout <<"30";
		    break;
		case 10:
			if(a==10) cout <<"31";
		    break;
		case 11:
			if(a==11) cout <<"30";
		    break;
	    default:
	    	cout << "31";
	}
}