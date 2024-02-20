#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream finp;
    finp.open("dayso.txt");
    if(finp.fail()){
        cout<<"Mo file khong thanh cong";
    }
    return 0;
    cout<<"Day so doc duoc tu file la: "<<endl;
    int x, tong = 0;
    while(!finp.eof()){
        finp >>x;
        if(finp.eof()){
            break;
        }
        tong = tong  + x;
        cout<<x<<" ";
    }
    cout<<endl<<"Tong cua day so doc duoc la: "<<tong;
    return 0;
}