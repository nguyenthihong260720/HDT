#include<iostream>
#include<string>
#include<fstream>
#include<math.h>
#define size 100
using namespace std;
struct mathang{
	string tenmh;
	string noisx;
	int soluong;
	int giaban;
};
int main(){
	ifstream finp;
	ofstream fout;
	finp.open("mathang.inp");
	if(finp.fail()){
		cout << "Mo file khong thanh cong";
	}
	fout.open("mathang.out");
	if(fout.fail()){
		cout << "Tao file khong thanh cong";
	}
	int n;
	finp >> n;
	int A[100];
	mathang mh[size];
	for(int i = 0 ; i< n;i++){
		finp.ignore();
		getline(finp,mh[i].tenmh);
		getline(finp,mh[i].noisx);
		finp >> mh[i].soluong;
		finp >> mh[i].giaban;
	}
	cout << n << endl;
	for(int i = 0 ; i< n;i++){
		
		cout << mh[i].tenmh << endl;
		cout << mh[i].noisx << endl;
		cout << mh[i].soluong << " ";
		cout << mh[i].giaban << endl;
	}
	
	float doanhthu;
	int count = 0;
	for(int i = 0 ; i< n;i++){
		 doanhthu = mh[i].soluong * mh[i].giaban;	
		if(doanhthu >= 1000){
			count++;
		}else if(doanhthu == 0){
			cout <<"0";
		}
		
	}
	fout << count << endl;
	cout << count << endl; 
	// dem so luong Viet Nam
	int dem = 0;
	for(int i = 0 ; i < n;i++){
		if(mh[i].noisx == "Viet Nam"){
			dem++;
		}	
	}
	fout << dem << endl;
	cout << dem << endl;
	
	
	// giamdan
	int temp;
	for(int i = 0 ; i< n;i++){
		for(int j = i+1; j < n ; j++){
			if(mh[i].giaban < mh[j].giaban){
				mathang temp = mh[i];
				mh[i] = mh[j];
				mh[j] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		fout << mh[i].tenmh<< endl;
		cout << mh[i].tenmh<< endl;
	}
	finp.close();
	fout.close();
}
