#include<iostream>
#include<fstream>
#include<string>
#define size 100
using namespace std;
struct thanhpho{
	int n;
	string namecity;
	int sL2021;
	int sL2022;
};
int main(){
	ifstream finp;
	finp.open("covid.inp");
	if(finp.fail()){
		cout << "Mo file khong thanh cong";
	}
	ofstream fout;
	fout.open("covid.out");
	if(fout.fail()){
		cout << "Tao file khong thanh cong";
	}
	int n;
	finp >> n;
	int A[100];
	thanhpho tp[size];
	for(int i = 0; i < n; i++){
		finp.ignore();
		getline(finp, tp[i].namecity) ;
		finp >> tp[i].sL2021;
		finp >> tp[i].sL2022;
	}
	cout << n << endl;
	for(int i = 0; i < n; i++){
		cout << tp[i].namecity << endl ;
		cout << tp[i].sL2021<< " ";
		cout << tp[i].sL2022 << endl;
	}
	
	// yeu cau a
	int min = tp[0].sL2022 - tp[0].sL2021;
	for(int i = 1; i < n; i++){
		if(tp[i].sL2022-tp[i].sL2021 <= min){
			min = tp[i].sL2022-tp[i].sL2021;
		}
	}
	for(int i = 0; i < n; i++){
		if(tp[i].sL2022-tp[i].sL2021 == min){
			cout << tp[i].namecity << endl;
			fout << tp[i].namecity << endl;
			
		}
	}
	
	// � b
	int equal = tp[0].sL2022 - tp[0].sL2021;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(tp[i].sL2022 - tp[i].sL2021 == tp[j].sL2022 - tp[j].sL2021){
				cout << tp[i].namecity << " " << tp[j].namecity << endl;
				fout << tp[i].namecity << " " << tp[j].namecity << endl;
			}
		}
	}
	
	finp.close();
	fout.close();
}
