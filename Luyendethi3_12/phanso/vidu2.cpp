#include<iostream>
#include<math.h>
using namespace std;
class complex{
	double a,b;
	public:
		complex(){
			a = 0;
			b = 0;
		}
		complex(double, double);
		complex operator+(complex);
		complex operator-(complex);
		complex operator+=(complex);
		complex operator+(double);
		friend istream & operator >> (istream &is, complex &x);
		friend ostream & operator << (ostream &os, complex &x);
		friend complex operator+(double, complex);
		void display();
};
complex::complex(double a, double b){
	this->a = a;
	this -> b = b;
}
complex complex::operator+(double z){
	complex tmp;
	tmp.a = this -> a + z;
	tmp.b = this -> b;
}
complex complex::operator +=(complex x){// ham toan tu +=
	a = a + x.a;
	b = b + x.b;
	return *this;
}
complex complex::operator+(complex x){
	complex tmp;
	tmp.a = a + x.a;
	tmp.b = b + x.b;
	return tmp;
}
ostream &operator<<(ostream &os, complex &x){
	os <<"*****"<< endl;
	os << x.a<< "+"<< x.b<< "*i"<< endl;
	os <<"*****"<< endl;
	return os;
}
istream &operator>>(istream &is, complex &x){
	cout << "Cho biet a: ";
	is >> x.a;
	cout << "Cho biet b: ";
	is >> x.b;
	return is;
}
complex complex::operator-(complex x){
	complex tmp;
	tmp.a = a - x.a;
	tmp.b = b - x.b;
	return tmp;
}
complex operator+(double z, complex x){
	complex tmp;
	tmp.a = z + x.a;
	tmp.b = x.a;
	return tmp;
}
void complex::display(){
	cout << a << "+" << b <<  "*i" << endl;
}
int main(){
	complex A(4,8);
	complex B(3,4);
	complex C;
	cout << "A = ";
	A.display();
	cout << "B = ";
	B.display();
	C = A + B;
	cout << "C = ";
	C.display();
	A += C; // A = A.operator +=(B);
	A.display();
	A.display();
	complex D;
	cin >> D;
	cout << D;
	return 0;
}
