// Bai4_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#define SIZE 100
using namespace std;
// dinh nghia kieu du lieu moi co ten la MatHang
struct MatHang {
    // thong tin cua mat hang
    string maMH, tenMH;
    int soLuong;
    float giaBan;
};

int main()
{
    // doc du lieu tu file
    ifstream finp;
    finp.open("mathang.inp");
    if (!finp.is_open()) {
        cout << "Mo file khong thanh cong!";
        return 0;// ket thuc chuong trinh
    }
    int n;// so luong mat hang
    finp >> n;// doc so dau tien trong file -- so luong mat hang
    MatHang dsmh[SIZE];// tao mang dsmh co kieu la MatHang
    for (int i = 0; i < n; i++) {
        finp >> dsmh[i].maMH;
        finp.ignore();// bo qua phim enter trong bo dem
        getline(finp, dsmh[i].tenMH);
        finp >> dsmh[i].soLuong;
        finp >> dsmh[i].giaBan;
    }

    cout << n << endl;
    for (int i = 0; i < n; i++) {
        cout << dsmh[i].maMH << endl;
        cout << dsmh[i].tenMH << endl;
        cout << dsmh[i].soLuong << endl;
        cout << dsmh[i].giaBan << endl;
    }
    finp.close();
    ofstream fout;
    fout.open("mathang.out");
    if(!fout.is_open()){
        cout<<"Tao file khong thanh cong!";
    }
    else{
        cout<<"Tao file thanh cong ";
    }

    for (int i = 0; i < n; i++) {
        fout<< dsmh[i].maMH<<" ";
        fout<<dsmh[i].tenMH<<" ";
        fout<<  dsmh[i].soLuong<<" ";
        fout<<  dsmh[i].giaBan<<endl;
    }
    cout<<endl; 
    // for (int i = 0; i < n; i++) {
    //     cout << dsmh[i].maMH<<" ";
    //     cout << dsmh[i].tenMH<<" " ;
    //     cout << dsmh[i].soLuong<<" ";
    //     cout << dsmh[i].giaBan <<" ";
    //  }
    //  cout<<endl;
    return 0;
    fout.close();
}

