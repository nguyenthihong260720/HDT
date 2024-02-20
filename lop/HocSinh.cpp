#include<iostream>
#include<string>
#define size 100
using namespace std;
class HocSinh{
	private:
		string ten;
		float t,v,h;
	public:
		HocSinh();
		HocSinh(string ten, float t, float v, float h);
		void nhapDL();
		void hienThi();
		float diemTB();
		void maxDiemTB(HocSinh hs[], int n);
};
// trien khai ham
HocSinh::HocSinh(){
	ten = "";
	t = v = h = 0;
}
HocSinh::HocSinh(string ten, float t, float v, float h){
	this -> ten = ten;
	this -> t = t;
	this -> v = v;
	this -> h = h;
}
void HocSinh::nhapDL(){
	cout << "Nhap ten hoc sinh : ";
	cin.ignore();
	getline(cin, ten);
	cout <<"Nhap t : ";
	cin >> t;
	cout<< "Nhap v : ";
	cin >> v;
	cout << "Nhap h : ";
	cin >> h;
}
// ham tinh trung binh
float HocSinh::diemTB(){
	return (t+v+h)/3;
}
void HocSinh::hienThi(){
	cout << "Hoten: " << ten << endl;
	cout << "Diem toan : " << t<< endl;
	cout << "Diem van : " << v<< endl;
	cout << "Diem hoa: " << h<< endl;
	cout << "DIem TB : " << diemTB()<< endl;
}
void maxDiemTB(HocSinh hs[], int n){
	HocSinh max = hs[0];
	for(int i = 1 ; i < n ; i++){
		if(hs[i].diemTB() > max.diemTB()){
			max = hs[i];
		}
	}
	cout << "Thong tin hoc sinh co diem lon nhat : ";
	max.hienThi();
}
int main(){
	HocSinh hs[size];
	int n;
	cout << "So luong hs : " ;
	cin >> n;
	for(int i = 0; i < n; i++){
		hs[i].nhapDL();
	}
	for(int i = 0 ; i < n; i++){
		cout << " Thong tin hs thu : "<< i + 1;
		hs[i].hienThi();
	}
	maxDiemTB(hs,n);
	return 0;
}
