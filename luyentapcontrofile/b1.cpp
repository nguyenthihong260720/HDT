#include<iostream>
#include<fstream>
#include<string>
#define size 100
using namespace std;
struct danhsach
{   
    string tensach;
    int tm_year;
    int soluong, giaban;
    
};

int main(){
    ifstream finp;
    finp.open("book.text");
    if(finp.fail()){
        cout << "File khong thanh cong";
        return 0;
    }
    int n; 
    finp >> n;
    danhsach ds[size];
    for(int i = 0 ; i < n; i++){
        getline(finp, ds[i].tensach);
        finp.ignore();
        finp >> ds[i].tm_year;
        finp >> ds[i].soluong;
        finp >> ds[i].giaban;  
    }
    
    cout << n<< endl;
    for(int i = 0; i < n ; i++){
        cout << ds[i].tensach << endl;
        cout << ds[i].tm_year <<" ";
        cout << ds[i].soluong <<" ";
        cout << ds[i].giaban <<endl;
    }
  
    finp.close();
   
   
    return 0;

}
