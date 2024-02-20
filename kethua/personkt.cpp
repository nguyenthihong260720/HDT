#include<iostream>

class Person{
	protected:
		string ten;
		int tuoi;
	public:
		Person(){
			ten = "";
			tuoi = 0;
		}
		Person(string ten, int tuoi){
			this -> ten = ten;
			this -> tuoi =  tuoi;
		}
		void xuat(){
			cout << "Ten: " << ten << endl;
			cout << "Tuoi: " << tuoi << endl;
		}
	// kiem tra Ham ao thuan tuy
	virtual bool lakietxuat() = 0;
};
