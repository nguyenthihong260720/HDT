#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max = n%10;
    int min = n%10;
    while(n!=0){
        int  soDonVi = n%10;
        if(max<soDonVi){
            max = soDonVi; 
        }else if(min>soDonVi){
            min = soDonVi;
        }
        n = n/10;
    }
    cout<<min<<" "<<max;
}