#include<iostream>
#include<math.h>
#include<fstream>
#define size 100;
using namespace std;
int main(){
    
	ifstream finp;
	ofstream fout;
	finp.open("songuyen.inp");
	if (finp.fail())
	{
		cout << " Mo file khong thanh cong!";
		return 0;
	}

	fout.open("songuyen.out");
	if (fout.fail())
	{
		cout << "khong tao duoc file!";
		return 0;
	}

	int n = 0, A[100];
	while (!finp.eof())// doc du lieu file
	{
		finp >> A[n];
		if (finp.eof())
			break;
		n++;
	}
    cout << n << endl;
	fout << n << endl;
    // so nho nhat thu hai
    int min = A[0];
    int min1 = A[0];
    for(int i = 0; i < n; i++){
        if(min > A[i]){
            min = A[i];
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(min1 > A[i] && min1 != A[i]){
            min1 = A[i];
        }
    }
    cout << min1 << endl;  
    fout << min1<< endl;

    // bien doi so
    for(int i = 0; i < n; i++){
        if(A[i] % 2 == 0){
            A[i] = A[i] * 2;
        }
        else{
            A[i] = A[i] * 3;
        }
    }
    // so chinh phuong 
    
    for(int i = 0; i < n; i++){
        int x = sqrt(A[i]);
        if( x * x == A[i]){
            fout << A[i] << " "<< min1;
            cout << A[i] << " "<<min1;
        } 
    }
    
    finp.close();
    fout.close();
    return 0;


}