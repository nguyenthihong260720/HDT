#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n;
    cin>>n;
    // do{
    //     if(n<=0){
    //         cin>>n;
    //     }
    // }while(n<=0);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int tg;
    for(int i = 0 ;i<n-1;i++){
        for(int j = i+1; j<n;j++){
            if(a[i]>a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
    for(int i = 0;i < n;i++){
        cout<<a[i]<<" ";
    }
}