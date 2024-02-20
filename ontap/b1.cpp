#include<iostream>
#include<fstream>
#define size 100
using namespace std;
int main(){
	ifstream finp;
	finp.open("demtu.inp");
	if(finp.fail()){
		cout << "Mo file khong thanh cong";
	}
	ofstream fout;
	fout.open("demtu.out");
	if(fout.fail()){
		cout << "Tao file khong thanh cong";
	}
	
	int n = 0;
	string A[100];
	finp >> n;
	while(!finp.eof()){
		finp >> A[n];
		n++;
	}
	int count = 0;
	for(int i = 0; i < n; i++){
		if(A[i][0] >= 'a' && A[i][0] <= 'z'){
			count++;
		}
	}
	fout << count;
	cout << count;
	
	finp.close();
	fout.close();
}
