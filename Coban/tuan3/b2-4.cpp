#include<iostream>
using namespace std;
 int UCLN(int A, int B){
        if(B==0){
            return A;
        }
      return UCLN(B,A%B);
    }
int main(){
    int A,B;
    A = 20;
    B = 12;
    cout<<UCLN(A,B);

}