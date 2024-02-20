#include<iostream>
#include<string>
#include"color.cpp"
using namespace std;
class pixel:public color, public point{
	public:
		pixel(){
		};
		pixel(string ten, int ma, int x, int y):color(ten,ma),point(x,y){
		};
		void nhap();
		void xuat();
		bool kiemtra();
		
};
void pixel::nhap(){
	color::nhap();
	point::nhap();
}
void pixel::xuat(){
	color::xuat();
	point::xuat();
}
bool pixel::kiemtra(){
	if(point::cheochinh()==true && color::gettenmau().find("xanh") ){// string 
		return true;
	}
	return false;
}
