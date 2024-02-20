#include<iostream>
#include<fstream>
#include<string>
#define size 100
using namespace std;
struct sinhvien
{   
    int n;
    string ten, quequan;
    float toan, van, anh;
};

int main(){
    ifstream finp;
    finp.open("sinhvien.inp");
    if(finp.fail()){
        cout<<"Mo file khong thanh cong";
    }
    int n;
    finp >> n;
    sinhvien sv[size];
    for(int i = 0; i<n;i++){
        finp.ignore();
        getline(finp, sv[i].ten);
        getline(finp,sv[i].quequan);
        finp >> sv[i].toan;
        finp >> sv[i].van;
        finp >> sv[i].anh;
    }
    cout << n<<endl;
    for(int i = 0; i<n;i++){
        cout <<  sv[i].ten<<endl;
        cout << sv[i].quequan<<endl;
        cout << sv[i].toan<<" ";
        cout << sv[i].van<<" ";
        cout << sv[i].anh<<endl;
    }
    ofstream fout;
    fout.open("sinhvien.out");
    if(fout.fail()){
        cout << "Tao file khong thanh cong";
    }
    float diemTB = 0;
    int dem = 0;
    for(int i = 0 ; i<n;i++){
        diemTB = (sv[i].toan + sv[i].van + sv[i].anh) / 3.0;
        if(diemTB >= 8.5){
            dem++;
        }
    }
    cout<<dem<<endl;
    fout << dem<<endl;
    for(int i =0 ; i<n;i++){
        diemTB = (sv[i].toan + sv[i].van + sv[i].anh) / 3.0;
        if(diemTB >= 8.5){
            fout << sv[i].ten << " ";
            fout << sv[i].quequan << " ";
            fout << diemTB << endl;

            cout << sv[i].ten << " ";
            cout << sv[i].quequan << " ";
            cout << diemTB << endl;
        }
    }
}