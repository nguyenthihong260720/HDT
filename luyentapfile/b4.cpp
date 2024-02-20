#include<iostream>
#include<fstream>
#define size 100
using namespace std;
int main(){
    fstream finp;
    ofstream fout;
    finp.open("chess.inp");
    fout.open("chess.out");
    if(finp.fail()){
        cout << "Mo file khong thanh cong";
    }
    int m , n;
    finp >> m ;
    finp >> n;
    cout << m <<" "<< n<< endl;
    int a[size][size];
    for(int i = 0; i < m ; i ++){
        
        for(int j = 0; j < n; j++ ){
            
            finp >> a[i][j];
            cout << a[i][j]<<" ";
        }
        cout<<endl;
    }
    int max2 = a[0][0];
    for(int j = 0 ; j < n; j++){
        if( a[0][j] > max2){
              max2 = a[0][j];
        }   
    }
    
    cout << max2 << endl;
    // hang 1
    // int b[1][size];
    int max = a[1][0];
    for(int j = 0 ; j < n; j++){
        if( a[1][j] > max){
            max = a[1][j];
        }   
    }
    
    cout << max<< endl;
    // hang 2
    // int c[2][size];
    int max1 = a[2][0];
    for(int j = 0 ; j < n; j++){
        if( a[2][j] > max1){
              max1 = a[2][j];
        }   
    }
    
    cout << max1 << endl;
    
    // tong
    int sum = 0;
    sum = max + max1 + max2;
    fout << sum;
    cout << sum;


    finp.close();
    fout.close();
    return 0;
}