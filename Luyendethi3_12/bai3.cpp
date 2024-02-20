#include<iostream>
#include<string>
#define size 100
using namespace std;
class sinhvien{
	public:
		string hoten;
		int namsinh;
		double diemTB;
		bool gender;
	public:
		// ham khong tham so
		sinhvien(){
			hoten = ' ';
			namsinh = 0;
			diemTB = 0;
			gender = false;
			
		}
		// ham co tham so
		sinhvien(string hoten, int namsinh, double diemTB, bool gender){
			this -> hoten = hoten;
			this -> namsinh = namsinh;
			this -> diemTB = diemTB;
			this -> gender = gender;
		}
		// ham nhap
		void nhap(){
			cout << "Nhap ten : " ;
			cin.ignore();
			getline(cin, hoten);
			cout << "Nhap nam sinh : " ;
			cin >> namsinh;
			cout << "Nhap diemTB: " ;
			cin >> diemTB;
			cout << "Nhap gender : ";
			cin >> gender;
		}
		void hienthi(){
			cout << hoten << " " << namsinh <<" "<< diemTB <<" ";
			cout << "Gender : " << (gender?"Nam":"Nu") << endl;
		}
		
};
int main(){
	int n;
	cout << "Nhap so sinh vien : " ;
	cin >> n;
	sinhvien sv[100];
	for(int i = 0; i < n; i++){
		sv[i].nhap();
	}
	for(int i = 0; i < n; i++){
		sv[i].hienthi();
	}
	int dem = 0;
	for(int i = 0; i < n; i++){
		sv[i].hoten.find("Binh");
		if(sv[i].namsinh == 1982){
			dem++;
		}
	}
	cout << dem << endl;
	for(int i = 0 ; i < n -1 ; i++){
		for(int j = i + 1; j < n ; j++ ){
			if(sv[i].namsinh > sv[j].namsinh){
				sinhvien temp = sv[i];
				sv[i] = sv[j];
				sv[j] = temp;
			}
			sv[j].hienthi();
		}
		sv[i].hienthi();
		cout << endl;
	}
	
	return 0;
}
