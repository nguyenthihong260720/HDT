#include<iostream>
#include<math.h>
using namespace std;
bool ktrascp(int m){
    int x = sqrt(m);
    if( x*x == m){
        return true;
    }
     return false;
    
}
void csp(int m) {
    if(ktrascp(m) == true){
        cout << "true";
    }
    else{
        cout<<"false";
    }
}
int main(){
    int n;
    cin>>n;
    ktrascp(n);
    csp(n);
}
