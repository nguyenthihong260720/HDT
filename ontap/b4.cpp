#include<iostream>
#include<math.h>
using namespace std;
class Fraction{
	int n, d;
	public:
		// ham khong tham so
		Fraction (){
			n = 0;
			d = 1;
		}
		// ham co tham so
		Fraction(int n, int d){
			this->n = n;
			this->d = d;
		}
		// ham tao sao chep
		Fraction(Fraction &f){
			this->n = f.n;
			this->d = f.d;
		}
		void nhap(){
			cout << "Nhap tu so n = ";
			cin >> n;
			cout << "Nhap mau so d = ";
			cin >> d;
		}
		Fraction operator+(Fraction f){
			Fraction temp;
			temp.n = n * f.d + d * f.n;
			temp.d = d * f.d;
			return temp;
		}
		void display(){
			cout << n << "/" << d;
		}
};
int main(){
	Fraction x,y,z;
	cout << "Phan so 1 : "<< endl;
	x.nhap();
	cout << "Phan so 2 : "<< endl;
	y.nhap();
	cout << endl;
	
	z = x + y;
	cout << "Tong 2 phan so la : ";
	z.display();
}
