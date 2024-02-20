#include<iostream>
#include<math.h>
using namespace std;
class phanso{
	int a,b;
	public:
		phanso ()	{
			a = 0;
			b = 1;
		}
		// ham co tham so
		phanso(int a, int b){
			this -> a = a;
			this -> b = b;
		}
		// ham nhap phan so
		void nhap(){
			cout << "Nhap tu so a = ";
			cin >> a;
			cout << "Nhap tu so b = ";
			cin >> b;
		}
		// phep cong hai ps
		phanso operator+(phanso x){
			phanso temp;
			temp.a = a * x.b + x.a * b;
			temp.b = b * x.b;
			return temp;
		}
		// phep tempru 
		phanso operator-(phanso x){
			phanso temp;
			temp.a = a * x.b - x.a * b;
			temp.b = b * x.b;
			return temp;
		}
		// phep nhan
		
		phanso operator*(phanso x){
			phanso temp;
			temp.a = a * x.a;
			temp.b = b * x.b;
			return temp;
		}
		// phep chia
		phanso operator/(phanso x){
			phanso temp;
			temp.a = a * x.b;
			temp.b = b * x.a;
			return temp;
		}
		void display(){
			cout << a << "/" << b;
		}
};
int main(){
	phanso x,y,z;
	// nhap 2 ps
	cout << "Phan so 1 : "<< endl;
	x.nhap();
	cout << "Phan so 2 : "<< endl;
	y.nhap();
	cout << endl;
	z = x + y;
	cout << "Tong 2 ps la ";
	z.display();
	cout << endl;
	z = x - y;
	cout << "Hieu 2 ps la ";
	z.display();
	cout << endl;
	z = x * y;
	cout << "Nhan 2 ps la ";
	z.display();
	cout << endl;
	z = x / y;
	cout << "Chia 2 ps la ";
	z.display();
	

}
