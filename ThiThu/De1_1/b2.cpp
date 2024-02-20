#include<iostream>
#include<string>
#define size 100
#include<fstream>
#include<math.h>
using namespace std;
struct thanhpho{
	int n;
	string nametp;
	int n2020; int n2021;
};

int main(){
	ifstream finp;
	ofstream fout;
	finp.open("danso.inp");
	fout.open("danso.out");
	if(finp.fail()||fout.fail()){
		cout << "File khong thanh cong";
	}
	int n;
	finp >> n;
	thanhpho tp[size];
	for(int i = 0 ; i< n; i++){
		finp.ignore();
		getline(finp, tp[i].nametp);
		finp >> tp[i].n2020;
		finp >> tp[i].n2021;
	}
	cout << n << endl;
	for(int i = 0 ; i< n; i++){
		cout << tp[i].nametp << endl;
		cout << tp[i].n2020 << " "  ;
		cout << tp[i].n2021 << endl;
	}
	int max = abs(tp[0].n2020 - tp[0].n2021);
	for(int i = 0 ; i< n; i++ ){
		int s = abs(tp[i].n2020 - tp[i].n2021);
		if(s> max){
			max = s;
		}
	}
	for(int i = 0 ; i< n; i++ ){
		int s = abs(tp[i].n2020 - tp[i].n2021);
		if( s == max){
			cout << tp[i].nametp << endl;
			fout << tp[i].nametp << endl;
		}
	}
	// y b
	for(int i = 0 ; i<n-1; i++){
		for(int j = i+1; j < n; j++){
			if(tp[i].n2020 - tp[i].n2021 == tp[j].n2020 - tp[j].n2021 ){
				cout << tp[i].nametp << " " << tp[j].nametp;
				fout << tp[i].nametp << " " << tp[j].nametp;
			}
		}
	}
	
	finp.close();
	fout.close();
}
