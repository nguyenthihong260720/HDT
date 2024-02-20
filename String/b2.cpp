#include<iostream>
#include<string>
using namespace std;
struct TMovie
{
    string hoten, ho,ten;

};
int main(){
TMovie a[100];
    int n;
    cout<<"n = ";
    cin>>n;
    string dummy;
for(int i = 0; i<n; i++){
    getline(cin, dummy);
    cout<<"\nhoten: ";
    getline(cin, a[i].hoten);
    cout<<"ho: ";
    cin >> a[i].ho; 
    cout << "ten: ";
    cin >> a[i].ten;
}
}