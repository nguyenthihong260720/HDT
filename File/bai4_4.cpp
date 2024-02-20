#include<iostream>
#include<fstream>
#define size 100
using namespace std;
int main(){
    ifstream finp;
    finp.open("dayso.txt");
    if(finp.fail()){
        cout<<"Mo file khong thanh cong!"<<endl;
        return 0;
    }
    else{
        cout<<"Mo file thanh cong"<<endl;
    }
    int a[100];
    int n;
	for(int i = 0; i < n; i++){
	    finp >> a[i];
    }
}