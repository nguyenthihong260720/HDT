#include<iostream>
#include<math.h>
using namespace std;

int nhapDL(int n){
    do{
        cin>>n;
    }while(n>200000);
    return n;
}
void so(int m){
    int dem = 0;
    while(m != 0){ 
        m = m /10;
        dem++;   
    }
    cout<<dem<<endl;
   
}
// so nguyen to
bool ktnto(int m){
    if(m<2){
        return false;
    }else{
        for(int i = 2;i<=m;i++){
             if(m % i == 0){
                 return false;
             }
         
        }
           return true;
    }

   }
   
void snt(int m){
    if(ktnto(m)== true){
        cout<<"  la so nto"<<endl;;
    }
    else{
        cout<<" khong la so nto"<<endl;
    }
}
// so chinh phuong
bool ktrascp(int m){
    int x = sqrt(m);
    if( x*x == m){
        return true;
    }
     return false;
    
}
void scp(int m){
    if(ktrascp(m) == true){
        cout<<"La so chinh phuong"<<endl;;
    }
    
   cout<<"khong la so chinh phuong"<<endl;
    }
    // so doi xung
    bool ktradx(int m){
        int n = 0;
        n = n*10 + m % 10;
        m = m / 10;
        return m;
    }
    void dx(int m) {
        if(ktradx(m)==m){
            cout<<"La so dx";
        }
        else {
            cout<<"Khong la so doi xung";
        }
    }
    

    

int main(){
    int x;
    x = nhapDL(x);
    so(x);
  ktnto(x);
    snt(x);
    scp(x);
    ktrascp(x);
    ktradx(x);
    dx(x);
}