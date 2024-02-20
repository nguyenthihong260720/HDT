
#include<iostream>
#include<math.h>
using namespace std;
class dienTich{
	public:
		float d;
		float r;
	public:
		// khai bao
		dienTich(){
		
		};
		// ham tao sao chep
		dienTich(dienTich& other): d(other.d), r(other.r){};
	
		// khai bao ham c� tham so
		dienTich(float d, float r) {
			this -> d = d;
			this -> r = r;
		}
		void nhapDL();
		void hienThi();	
		float kpS();
		float giaTien();
		void max(dienTich s[], float n);
		int tong(dienTich s[], int n);
};
void dienTich::nhapDL(){
		cout << "Nhap d = ";
		cin >> d;
		cout << "Nhap r = ";
		cin >> r;
} 
void dienTich::hienThi(){
		cout << d << " " << r << endl;
}
float dienTich::kpS(){	
	return d * r ;	
}
// tinh gia tien lo dat
float dienTich::giaTien(){
	return (d * r) * 20 ;
	
}

void max(dienTich s[], float n){
	 
	dienTich max = s[0];
	for(int i = 1 ; i < n; i++){
		if(s[i].giaTien() > max.giaTien()){
			if(s[i].giaTien() > 200 || max.giaTien() > 200){ 
				max = s[i];
			}
		}
	} 
	cout << "lo dat max : ";
	max.hienThi();
}
//int tong(dienTich s[], int n){
//	int sum = 0;
//	for(int i = 0; i < n; i++){
//		sum += (s[i].kpS() * 1000);
//	}
//	cout << "Tong lo dat : " ;
//	return sum;
//}
int main(){
	int n;
	cout << "Nhap n = ";
	cin >> n;
	if(n < 200 ){
		cout << "Thong tin dat : "<< endl;
	}
	dienTich s[100];
	for(int i = 0 ; i < n; i++){
		s[i].nhapDL();
	}
	for(int i = 0 ; i < n; i++){
		cout << "Hien thi thong tin : " ;
		s[i].hienThi();
	}
	for(int i = 0 ; i < n; i++){	 
		if((s[i].d * s[i].r) > 200){
			cout << " Dien tich lon hon 200 la " ;
			  s[i].kpS();
			s[i].hienThi();
		}
	}
		
	for(int i = 0 ; i < n; i++){	 
		if((s[i].d * s[i].r) > 200){
			cout << " Gia tien co lo dat lon hon 200 la " ;
			 s[i].giaTien();
			 s[i].hienThi();
		}
	}	
	max(s,n);
//	for(int i = 0 ; i < n; i++){
//		cout << "Tong so thue : " ;
//		s[i].tong();
//		s[i].hienThi();
//	}
//	return 0;	
}
