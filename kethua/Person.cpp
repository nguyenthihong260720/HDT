#include<iostream>
#include<string>
#define size 100
using namespace std;
class Person{
	public:
		string hoTen;
		int ngaySinh;
		string queQuan;
	public:
		Person(){};
		//ham tao
	
		Person(string hoTen, int ngaySinh, string queQuan){
			this -> hoTen = hoTen;
			this -> ngaySinh = ngaySinh;
			this -> queQuan = queQuan;
		}
		//ham tao sao chep
		Person(Person& other): hoTen(other.hoTen),ngaySinh(other.ngaySinh),queQuan(other.queQuan){};
		// nhap dl hienthi
		void nhapDL();
		void hienThi();
		
		
};
void Person::nhapDL(){
			cout << "Nhap hoTen: ";
			cin.ignore();
			getline(cin, hoTen);
			
			cout << "Nhap que quan : ";
			getline(cin, queQuan);
			
			cout << "Nhap ngay sinh: ";
			cin >> ngaySinh;
			
			 
		}
void Person::hienThi(){	
		cout << hoTen << " "<< ngaySinh << " " << queQuan <<endl;
}	
int main(){
	
	int n;
	cout << "Nhap n = ";
	cin >> n;
	Person ps[n];
	if(n>50){
		cout << "So luong nguoi khong duoc lon hon 50";
		return 0;
	}
	for(int i = 0 ; i < n; i++){
		ps[i].nhapDL();
		cout << endl;
	}
	for(int i = 0 ; i < n; i++){
		cout << "Thong tin Person " << i+1<<":";
		ps[i].hienThi();	
	}
	// Hien thi tuoi khong giam
	cout << endl;
	for(int i = 0 ; i < n - 1 ; i++){
		for(int j = i + 1 ; j < n ; j++){
			if(ps[i].ngaySinh < ps[j].ngaySinh){
				Person temp = ps[i];
				ps[i] = ps[j];
				ps[j] = temp;
			}
			ps[j].hienThi();		
		}
		ps[i].hienThi();	
	}
	return 0;
	// hien thi tim nguoi co ten Anh

}
