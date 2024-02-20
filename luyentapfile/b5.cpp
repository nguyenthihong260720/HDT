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
    finp.open("book.inp");
    if(finp.fail()){
        cout << "File khong thanh cong";
        return 0;
    }
    int n; 
    finp >> n;
    danhsach ds[size];
    for(int i = 0 ; i < n; i++){
        finp.ignore();
        getline(finp, ds[i].tensach);
        finp >> ds[i].tm_year;
        finp >> ds[i].soluong;
        finp >> ds[i].giaban;  
    }
    cout << n<< endl;
    for(int i = 0; i < n ; i++){
        cout << ds[i].tensach<<endl;
        cout << ds[i].tm_year<<" ";
        cout << ds[i].soluong<<" ";
        cout << ds[i].giaban<<endl;
    }
  
    finp.close();
    ofstream fout;
    fout.open("book.out");
    if(fout.fail()){
        cout << "Tao file khong thanh cong";
        return 0;
    }
    int doanhthu;
    int count = 0;
    for(int i = 0; i < n; i++){ 
       doanhthu = ds[i].soluong * ds[i].giaban;
        if(doanhthu >= 1000){
            count++;
        }
        
    } 
    fout << count << endl;
    cout << count << endl;
    for(int i = 0 ; i < n; i++){
         doanhthu = ds[i].soluong * ds[i].giaban;
        if(doanhthu >= 1000){
            fout << ds[i].tensach << endl;
            cout << ds[i].tensach << endl;
        }
    }
    fout.close();
    return 0;

}