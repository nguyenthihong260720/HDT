#include<iostream>
#include<math.h>
using namespace std;
bool ktrasnto(int m){
    if(m<2){
        return false;
    }else{
        for(int i =2; i<= sqrt(m);i++){
            if(m % i == 0){
                return false;
            }
        }
        return true;
    }
}
void snto(int m){
    if(ktrasnto(m) == true){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
int main(){
    int n;
    cin>>n;
    ktrasnto(n);
    snto(n);
}