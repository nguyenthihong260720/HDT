#include<iostream>
#include<fstream>
#include<math.h>
#define size 100
using namespace std;
int main(){
    ifstream finp;
    ofstream fout;
    finp.open("thietbi.inp");
    if(finp.fail()){
        cout << "Mo file khong thanh cong";
    }

    int n;
    finp >>n;
    cout << n;
    cout << endl;
    
    int A[100];
    for(int i = 0; i < n ; i++){
        finp >> A[i];
        cout << A[i] << " ";
    }
    cout << endl;
    int B[100];
    for(int i = 0; i< n; i++){
        finp >> B[i];
        cout << B[i] << " ";
    }
    fout.open("thietbi.out");
    if(fout.fail()){
        cout << "Tao file khong thanh cong";
    }

    // tong thiet bi & dem
    int count = 0;
    for(int i = 0; i< n; i++){
        if(A[i] > 100){
            count++;
        }
    }
    fout << count<< endl;

    // tim thiet bi nho nhat
    int min = A[0];
    for(int i = 0; i< n; i++){
        if(min > A[i]){
            min = B[i];
        }
    }
    fout << min<< " ";
    
    int min1 = B[0]; 
    int min2 = B[0];
    for(int i = 0; i < n; i++){
        if(min1 > B[i]){
            min1 = B[i];
        }
        else{
            if(min2 > B[i] && min2 != min1){
            min2 = B[i];
            }
        }
    }  
    cout << min2 << endl;
    fout << min2<< endl;

    finp.close();
    fout.close();

}