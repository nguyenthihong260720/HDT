#include<iostream>
#include<string>
using namespace std;
int xuathien(string s1, string s2){
    int dem = 0;
    int i = 0;
    while (s1.find(s2,i ) != -1){
        dem++;
        i = s1.find(s2,i) +  1;
    }
    return dem;  
}

int main(){
    string s1;
    cout<<"Xau s1: ";
    getline(cin,s1);
    string s2;
    cout<<"Xau s2: ";
    getline(cin, s2);
    
    if(s1.find(s2) == -1){
        cout<< "S1 khong xuat hien trong s2"<<endl;
    }else{
        cout<<"Vi tri s1 xuat hien trong s2 :"<<s1.find(s2)<<endl;
    }
    cout<<" So lan xuat hien cua s1 trong s2 : "<<xuathien(s1,s2);


}