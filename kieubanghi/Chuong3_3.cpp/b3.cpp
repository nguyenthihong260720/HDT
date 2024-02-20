#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Nhap chuoi: ";
    getline(cin,s);
    int dem = 0;
    for(int i = 0;i<s.length();i++){
        if(s[i]==' ' && s[i+1]==' '){
            dem++;
        }
    }
    cout<<"Xoa dau cach"<<dem<<" ";
    s.erase(0,dem);
    cout<<"Chuoi: "<<s;
}