#include<iostream>
#include<string>
#define size 100
using namespace std;
class Person{
	private:
		string hoten;
		int ngaySinh;
		string queQuan;
	public:
		//ham tao co tham so
		Person(string hoten,int ngaySinh,string queQuan){
			this->hoten=hoten;
			this->ngaySinh=ngaySinh;
			this->queQuan=queQuan;	
		};
		// ham tao co sao chep
		Person(Person& other): hoten(other.hoten), ngaySinh(other.ngaySinh), queQuan(other.queQuan){
		};
		void nhapDL(){
			cout << "Nhap ho ten : ";
			cin.ignore();
			getline (cin, hoten);
			cout << "Nhap ngaySinh : ";
			cin >> ngaySinh;
			cout << "Nhap queQuan: ";
			getline (cin, queQuan);
		}
		void hienThi(){
			cout << "Hoten : " << hoten << " ";
			cout << "ngay sinh: " << ngaySinh << " ";
			cout << "que quan : " << queQuan;
		}
		
		
};
int main(){
	int n;
	cout << "Nhap n = ";
	cin >> n;

	Person ps[100];

	for(int i = 0 ; i < n; i++){
		ps[i].nhapDL();
	}
	for(int i = 0 ; i < n; i++){
		ps[i].hienThi();
	}
	
}
