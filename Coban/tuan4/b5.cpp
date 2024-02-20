#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int m,n ;
    cin>>m>>n;
    int a[100][100],b[100][100];
    for(int i = 0;i<m;i++){
        for(int j = 0;j < n; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0;i<m;i++){
        for(int j = 0;j < n; j++){
            cin>>b[i][j];
        }
    }
   
    for(int i = 0;i<m;i++){
         int tong = 0;
        for(int j = 0;j < n; j++){
          
            tong = a[i][j] + b[i][j];
             cout<<tong<<" ";
        }
       cout<<endl;
    }
    
   
}