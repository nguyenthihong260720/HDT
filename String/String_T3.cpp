
#include <iostream>
#include <string>
using namespace std;

// khai bao ham
string lowercase(string s);
//string uppercase(string s);

int main()
{
	string str;
	cout << "Nhap vao mot chuoi: ";
	getline(cin, str);

	cout << "Chuoi sau khi chuyen ve ki tu thuong la: " << lowercase(str);
	
	// tim kiem chuoi
	int viTri = str.find("Khoa");
	string chuoiCon = str.substr(5, 3);
	cout << "\nChuoi con: " << chuoiCon << endl;
	cout << "\nVi tri co chuoi \"Khoa\" la: " << viTri;
	return 0;
}

// ham chuyen tat ca chu cai trong xau ve ki tu thuong
// KhOA   Cong nghe THONG   Tin
string lowercase(string s) {
	// duyet tung ki tu trong chuoi
	for (int i = 0; i < s.length(); i++) {
		// Neu ki tu nao la ki tu hoa
		if (s[i] >= 'A' && s[i] <= 'Z') {
			// dua ve ki tu thu i ve ki tu thuong
			s[i] += 32;// s[i] = s[i] + 32;
		}
	}
	return s;
}