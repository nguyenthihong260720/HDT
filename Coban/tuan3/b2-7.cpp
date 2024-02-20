#include<iostream>
using namespace std;
int  sdx(int m){
    int x = 0;
    while(m!=0){
    x = x*10 + m%10;
    m = m / 10;
    }
    return x;
}
void dx(int m){
    if (sdx(m) == m){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
int main(){
    int n;
    cin>>n;
    sdx(n);
    dx(n);
}