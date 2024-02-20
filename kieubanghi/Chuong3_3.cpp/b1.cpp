#include<iostream>
#define size 100;
using namespace std;
void nhapMang(int &n, int a[]){
      for(int i = 0; i < n ; i++){
        cout<<a[i]<<' '<<endl;
    }  
}
void nhapDL(int &n, int a[]){
    for(int i = 0; i < n ; i++){
        cin>>a[i];
    }
}
void dem(int &x, int &n, int a[]){
    int dem = 0;
    for(int i = 0; i < n ; i++){
        if(x == a[i]){
            dem++;
        }
    }
    cout<<dem<<endl;

}
void max(int &n, int a[]){
    int max = a[0];
    for(int i = 1; i < n ; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    cout<<"So lon nhat: "<<max<<endl;
}
void min(int &n, int a[]){
    int min = a[0];
    for(int i = 1; i < n ; i++){
        if(min > a[i]){
            min = a[i];
        }
    }
    cout<<"So nho nhat: "<<min<<endl;
}
void songuyenkhacnhau(int &n, int a[]){
    
    for(int i = 0; i<n;i++){
        if(a[i] != a[i-1]){
            cout<<a[i]<<" ";
        }
        
    }
    
}
int main(){
   int n;
   cout<<"Nhap so phan tu: ";
   cin>>n;
   int a[100]; 
   cout<<"Nhap mang: ";
   nhapDL(n,a);
   nhapMang(n,a);
   int x;
   cout<<"Nhap x = ";
   cin>>x;
   dem(x,n,a);
   max(n,a);
   min(n,a);
   songuyenkhacnhau(n,a);
}