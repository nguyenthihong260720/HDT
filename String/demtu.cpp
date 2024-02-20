
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cout << "Nhap vao mot chuoi: ";
	getline(cin, s);
	int dem = 0;
	if (s[0] != ' ') {
		dem = 1;
	}
	
	for (int i = 0; i < s.length()-1; i++) {
		if (s[i] == ' ' && s[i + 1] != ' ') {
			dem++;
		}
	}
	cout << "So tu trong chuoi la: " << dem;
	return 0;
}
