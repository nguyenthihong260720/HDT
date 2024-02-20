#include<iostream>
#include<math.h>
#define size 100
using namespace std;
void nhapDL(int n, int a[]){
    for(int i = 0 ; i < n; i++){
        if(a[i]<1000){
            cin >> a[i];
        }
    }    
}
bool ktrascp(int n){
    int x = sqrt(n);
    return (x*x==n);
}
void csp(int n,int a[]){
    int dem = 0;
     
    for(int i = 0; i < n;i++){
       
        if(ktrascp(a[i])){
            dem++;
        }
    }
    cout<<dem<<endl;
}
void sC(int n, int a[]){
    int sc = 0;
    int sl = 0;
    for(int i = 0; i<n;i++){
        if(a[i]%2 == 0){
            sc++;
        }
        else{
            sl++;
        }
    }
    if(sc<sl){
        cout<<"So chan nho hon so le";
    }
    else if(sc > sl){
        cout<<"So chan lon hon so le";
    }
    else{
        cout<<"So chan bang so le";
    }
}

int main(){
    int n;
    int a[100];
    cout<<"Nhap n = ";
    cin >> n;
    nhapDL(n,a);
    csp(n,a);
    sC(n,a);

}