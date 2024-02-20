#include<iostream>
#include<math.h>
using namespace std;
#define MAX 100
 
void nhap (int &n,int a[])
{
  
   cin>>n;
    for(int i = 0; i < n; i++)
    {
       
        cin>>a[i];
    }
}
/* hàm xuất các giá trị trong mảng ra màn hình */
bool check(int n)
{
    if(n<2){
        return false;
    }
    return true;
  for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0){
            return false;
       }
       return true;
       
}
void ktra(int &n,int a[]){
    int dem = 0;
    for(int i = 0;i<n;i++){
        if(check(a[i]) == true){
              dem++;
        }
    }
   
   
}
 
int main()
{
    int n;
    int a[MAX];
    nhap(n,a);
    check(n);
    cout<< ktra(n,a);
}