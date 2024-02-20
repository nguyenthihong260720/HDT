// KieuBanGhi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct SinhVien {
	int maSV;
	string tenSV;
	string queQuan;
	bool gioiTinh;
};

int main()
{
	// cach1: kieu mang
	//SinhVien sv1, sv2, sv3;
	//SinhVien sv[100];// khai bao mang kieu sv, xin cap phat 100 o nho
	//int n;// so luong sv thuc te
	//cout << "Nhap so sinh vien: ";
	//cin >> n;

	//for (int i = 0; i < n; i++) {
	//	cout << "Nhap thong tin thu " << i+1 << "\n";
	//	cout << "Nhap ma sinh vien: ";
	//	cin >> sv[i].maSV;
	//	cin.ignore();// bo qua phim enter trong bo dem
	//	cout << "Nhap ten sinh vien: ";
	//	getline(cin, sv[i].tenSV);
	//	cout << "Nhap que quan: ";
	//	getline(cin, sv[i].queQuan);
	//	cout << "Nhap gioi tinh: ";
	//	cin >> sv[i].gioiTinh;
	//}

	// cach 2: vector
	vector<SinhVien> sv;// khai bao vector co kieu la SinhVien
	int n;// so luong sv thuc te
	cout << "Nhap so sinh vien: ";
	cin >> n;

	// tao doi tuong tam thoi
	SinhVien temp;
	for (int i = 0; i < n; i++) {
		cout << "Nhap thong tin thu " << i+1 << "\n";
		cout << "Nhap ma sinh vien: ";
		cin >> temp.maSV;
		cin.ignore();// bo qua phim enter trong bo dem
		cout << "Nhap ten sinh vien: ";
		getline(cin, temp.tenSV);
		cout << "Nhap que quan: ";
		getline(cin, temp.queQuan);
		cout << "Nhap gioi tinh: ";
		cin >> temp.gioiTinh;
		// them doi tuong tam thoi vao vector
		sv.push_back(temp);
	}

	// hien thi danh sach sinh vien vua nhap
	cout << "\nThong tin sv vua nhap la\n";
	for (int i = 0; i < n; i++) {
		cout << "\nMa sv: " << sv.at(i).maSV;// hoac:  sv[i].maSV
		cout << "\nTen sv: " << sv.at(i).tenSV;
		cout << "\nQue quan: " << sv.at(i).queQuan;
		cout << "\nGioi tinh: " << sv.at(i).gioiTinh;
	}
}
