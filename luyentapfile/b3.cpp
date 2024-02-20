#include<iostream>
#include<fstream>
#define size 100
using namespace std;
 int main(){
    ifstream finp;
    ofstream fout;
    finp.open("tree.inp");
    fout.open("tree.out");
    if(finp.fail() || fout.fail()){
        cout << "KHong thanh cong";
    }
    int n;
    finp >> n;
    double cc[size];
    int chiso[size];
    for(int i = 0; i< n; i++){
        finp >> cc[i];
        chiso[i] = i + 1;
    }
    for(int i = 0 ; i < n -1 ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(cc[i] > cc[j]){
                 double temCS = cc[i];
                 cc[i] = cc[j];
                 cc[j] = temCS;

                 int tempSo = chiso[i];
                 chiso[i] = chiso[j];
                 chiso[j] = tempSo;
             }
        }
    }
    for(int i = 0 ; i < n; i++){
        fout << chiso[i]<<" ";
        cout << chiso[i];
    }
    fout << endl;
    for(int i = 0; i < n; i++){
        fout<< cc[i]<<" ";
        cout << cc[i];
    }
    fout.close();
    finp.close();
    fout.close();
 }