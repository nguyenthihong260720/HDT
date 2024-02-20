#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float diemhoctap;
	int chuyencan;
	cin>>diemhoctap>>chuyencan;
	if(2.50<diemhoctap<3.19 && 65<chuyencan<79){
		cout<<"Kha";
	}
	else if(3.20<diemhoctap<3.59 && 65<chuyencan<79){
		cout<<"Kha";
	}
	else if(3.60<diemhoctap<4.00 && 65<chuyencan<79){
		cout<<"Kha";
	}else if(2.50<diemhoctap<3.19 && 80<chuyencan<89){
		cout<<"Kha";
	}
	else if(3.20<diemhoctap<3.59 && 80<chuyencan<89){
		cout<<"Gioi";
	}else if(3.60<diemhoctap<4.00 && 80<chuyencan<89){
		cout<<"Gioi";
	}else if(2.50<diemhoctap<3.19 && 90<chuyencan<100){
		cout<<"Kha";
	}else if(3.20<diemhoctap<3.59 && 90<chuyencan<100){
		cout<<"Gioi";
	}else if(3.60<diemhoctap&& diemhoctap<4.00 && 90<chuyencan&&chuyencan<100){
		cout<<"Xuat sac";
	}else if(diemhoctap<2.50 && 65<chuyencan<100){
		cout<<"khong dat";
	}
}
