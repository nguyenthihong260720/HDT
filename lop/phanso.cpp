#include<iostream>
#include<math.h>
using namespace std;
class Fraction{
	private:
		int a,b;
	public:
		void nhapDL(){
			std::cout << "Nhap a = "<< endl;
			std::cin >> a;
			// vi la phan so dk mau
			do{
				std::cout << "Nhap b = "<< endl;
				std::cin >> b;
			}while(b==0);
			
		}
		// cach hien thi phan so
		void phanso(){
			std::cout<< a << "/" << b;
		}
		// phuong thuc rut gon
		void rutgon(){
			int uc = UCLN(a,b);
			a /= uc;
			b /= uc;
		}
		// cach tim uoc chung lon nhat
		int UCLN(int x, int y){
			while(y!=0){
				int temp = y;
				y = x % y;
				x = temp;
			}
			return x;
		}
		
		// phuong thuc so sanh
		int sosanh(Fraction& other){
			int so1 = a * other.b;
			int so2 = other.a * b;
		
			return so1 - so2;
		}		
};

int main(){
	int n = 3;
	Fraction fractions[3];
	for (int i = 0; i < n; ++i) {
        std::cout << "Phan so thu " << i + 1 << ":" << std::endl;
        fractions[i].nhapDL();
        fractions[i].rutgon();
    } 
    std::cout<<"Phan so tu nho den lon: "<< std::endl;
    for (int i = 0; i < n; ++i) {
		for(int j = j +1;  j<n;j++){
			if (fractions[i].sosanh(fractions[j]) > 0) {
			Fraction temp = fractions[i];
			fractions[i] = fractions[j];
			fractions[j] = temp;
			}
		}        
    	fractions[i].nhapDL();
    	std::cout <<"  ";
	}
 return 0;   
}  



