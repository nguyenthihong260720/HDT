// báo
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream finp;
	ofstream fout;
	finp.open("string.inp");
	fout.open("string.out");
	if(finp.fail()){
		cout << "Mo file khong thanh cong";
	}
	if(fout.fail()){
		cout << "Tao file khong thanh cong";
	}
	int n;
	string A[100];
	finp >> n;
	while(!finp.eof()){
		finp >> A[n];
		n++;
	}
	finp.close();
	fout.close();
}
