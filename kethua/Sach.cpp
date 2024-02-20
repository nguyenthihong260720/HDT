#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class Sach{
	public:
		string sach;
		string tenxb;
		int nam;
		int sL;
		bool TrangThaiMuon;
	public:
		// khai bao
		Sach (){
			sach = "";
			tenxb = "";
			nam = 0;
			sL = 0;
			TrangThaiMuon = false;
		};
		// ham co tham so
		Sach(string sach, string tenxb, int nam, int sL, bool TrangThaiMuon){
			this -> sach = sach;
			this -> tenxb = tenxb;
			this -> nam = nam;
			this -> sL = sL;
			this -> TrangThaiMuon = TrangThaiMuon;
		}
		void nhapDL(){
			cout << "Nhap ten sach : ";
			cin.ignore();
			getline(cin, sach);
			
			cout << "Nhap ten xuat ban : ";
			getline(cin, tenxb);
			
			cout << "Nhap nam : ";
			cin >> nam;
			
			cout << "Nhap so luong: ";
			cin >> sL;
			
			cout << "Nhap trangThaiMuon : ";	
			cin >> TrangThaiMuon ;
			
		}
		void hienThi(){
			cout << sach << " " << tenxb << " "<< nam << " "<< sL << " ";
			cout << "Trang thai muon : " << (TrangThaiMuon ? "Da muon" : "Chua muon") << endl;
		}
		bool getTrangThaiMuon(){
			return TrangThaiMuon;
		}
};
int main(){
	int n;
	if(n <= 100) {
		cout << "Nhap n = ";
		cin >> n;
	}
	// khai bao mang
	Sach s[n];
	// nhap thong tin n quyen sach
	for(int i = 0 ; i < n; i++){
		s[i].nhapDL();
		
	}
	cout << endl;
	// hien thi thong tin da nhap
	for(int i = 0 ; i < n; i++){
		s[i].hienThi();
		
	}
	cout << endl;
	// hien thi thong tin da muon hay chua
	for(int i = 0 ; i < n; i++){
		if(s[i].getTrangThaiMuon() == 1){
			s[i].hienThi();
		}	
	}
	// hien thi tr 1990
	cout << endl;
	for(int i = 0 ; i < n; i++){
		if(s[i].nam < 1990){
			s[i].hienThi();
		}
	}
	// hien thi sap xep theo ten
	cout << endl;
	for(int i = 0 ; i < n -1 ; i++){
		for(int j = i + 1; j < n ; j++ ){
			if(s[i].sach< s[j].sach){
				Sach temp = s[i];
				s[j] = s[i];
				s[i] = temp;
			}
		}
	}
}
