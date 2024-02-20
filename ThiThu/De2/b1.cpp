#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cout << "Nhap xau s = ";
	getline(cin,s);
	// tim so luong chu hoa
	int slHoa = 0;
	int slSo = 0;
	int slDb = 0;
	for(int i = 0 ; i < s.length(); i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			 slHoa++;
		}else if(s[i] >= '0' && s[i] <= '9'){
			slSo++;
		}else if(s[i] < '0' || s[i] > '9' && s[i] < 'A' || s[i] > 'Z' && s[i] < 'a' || s[i] > 'z'){// sai
			slDb++;
		}
	}
	cout << slHoa << endl;
	cout << slSo << endl;
	cout << slDb << endl;

}
