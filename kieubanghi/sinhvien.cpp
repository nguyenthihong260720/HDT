// KieuBanGhi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#define SIZE 1000
using namespace std;

// dinh nghia kieu du lieu
struct SinhVien {
    // thong tin ve sinh vien
    string ten, queQuan;
    float diemT, diemV, diemA;
};

int main()
{
    SinhVien sv[SIZE];
    int n; // n la so sinh vien can quan li
    cout << "Nhap so sinh vien: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin.ignore();// bo qua phim enter trong bo dem
        cout << "Nhap thong tin sinh vien thu " << i << endl;
        cout << "Nhap ten: ";
        getline(cin, sv[i].ten);
        cout << "Nhap que quan: ";
        getline(cin, sv[i].queQuan);
        cout << "Nhap diem T, V va Anh: ";
        cin >> sv[i].diemT >> sv[i].diemV >> sv[i].diemA;
    }

    cout << "Danh sach sinh vien co diem tb >= 8.5" << endl;
    for (int i = 0; i < n; i++) {
        float diemTB = (sv[i].diemT + sv[i].diemV + sv[i].diemA) / 3;
        if (diemTB >= 8.5) {
            // hien thi thong tin sv thoa dkien
            cout << sv[i].ten << endl;
        }
    }

    cout << "Nhap vao que quan ban can tim: ";
    string qq;
    getline(cin, qq);
    // duyet qua tat ca cac sv
    for (int i = 0; i < n; i++) {
        if (sv[i].queQuan == qq) {
            cout << sv[i].ten << endl;
        }
    }

    return 0;
}

