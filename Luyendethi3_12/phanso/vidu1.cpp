#include<iostream>
#include<math.h>
using namespace std;
class complex{
	double a,b;// x = a + b * i;
	public:
		complex(){
			a = 0;
			b = 0;
		}
		complex(double, double);
		complex operator+(complex);
		complex operator-(complex);
		friend complex operator+(double, complex);
		void display();
};
// trien khai cac ham
complex::complex(double a, double b){
	this->a = a;
	this->b = b;
}
complex complex::operator+(complex x){
	complex tmp;
	tmp.a= a + x.a;
	tmp.b= b + x.b;
	return tmp;
} 
complex complex::operator-(complex x){
	complex tmp;
	tmp.a = a - x.a;
	tmp.b = b - x.b;
	return tmp;
}
complex operator+(double z, complex x){
	complex tmp;
	tmp.a = x.a + z;
	tmp.b = x.b;
	return tmp;
}
void complex::display(){
	cout << a << "+" << b << "*i" << endl;
}
int main(){
	complex A(4,8);
	complex B(3,4), C;
	cout << "A = "; A.display();
	cout << "B = "; B.display();
	A = 10 + B;
	cout << "A = ";
	A.display();
	return 0;
}
