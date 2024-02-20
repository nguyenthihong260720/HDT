#include<iostream>
#include<fstream>
#define size 100
using namespace std;
int main(){
    ifstream finp;
    ofstream fout;
    finp.open("songuyen1.inp");
    if(finp.fail()){
        cout << "Mo file khong thanh cong";
    }
    int n;
    int A[100];
    while (!finp.eof())
    {
        finp >> A[n];
        cout << A[n]<<" ";
    }
    
    fout.open("songuyen1.out");
    if(fout.fail()){
        cout << "Tao file khong thanh cong";
    }
    int A[size];
    for(int i = 0 ; i < n; i++){
        finp >> A[i];
    }
    int uniqueCount = 0;
    int numbers = 0;
    // dem so nguyen khac nhau
    for (int i = 0; i < uniqueCount - 1; i++) {
        for (int j = i + 1; j < uniqueCount; j++) {
            if (numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    fout << count<< endl;
    cout << count << endl;
    
    finp.close();
    fout.close();
}