#include<iostream>

using namespace std;
class TDate{
	public:
		short ngay;
		short thang;
		short nam;
	public:	
		// Ham tao mac dinh
		TDate() : ngay(1), thang(1), nam(2000){} ;
		// ham co tham so
		TDate(short n, short t, short m){
			this -> ngay = n;
			this -> thang = t;
			this -> nam = m;
		};
		// ham tao sao chep
		TDate(TDate& other) : ngay(other.ngay),thang(other.thang), nam(other.nam){} ;
		void nhapDL(){
			cout << "Nhap ngay = ";
			cin >> ngay;
			cout << "Nhap thang = ";
			cin >> thang;
			cout << "Nhap nam = ";
			cin >> nam;
		}
		void hienThi(){
			cout << ngay << "/" << thang << "/"<< nam <<endl;
		}
		
};

int main(){
	
		TDate d1,d2;
		
		d1.nhapDL();
		cout << "Thong tin ngay d1 : ";
		d1.hienThi();
		
		d2.nhapDL();
		cout << "Thong tin ngay d2 : ";
		d2.hienThi();
		
		if((d1.ngay <= d2.ngay)|| (d1.thang <=d2.thang)){
			cout << "Ngay d1 lau hon d2"<< endl;
		}else if((d1.ngay >= d2.ngay)|| (d1.thang >=d2.thang)){
			cout << "Ngay d1 som hon d2" << endl;
		}
		// y cuoi

	
}
