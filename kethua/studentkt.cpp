#include<iostream>
#include<string>
#include"personkt.cpp"
class Student:: public Person{
	private:
		float diemTB;
	public: 
		// khoi tao
		Student(){
			diemTB = 0;
		}
		// ham co tham so
		Student(string ten, int tuoi, float diemTB)::Person(ten, tuoi){
			this -> diemTB = diemTB;
		}
		// Ham nhap DL
	void nhapDL(){
		cout << "Nhap ten : ";
		cin.ignore();
		getline(cin, ten);
		cout << "Nhap tuoi : ";
		cin >> tuoi;
		cout <<"Nhap diem trung binh: ";
		cin >> diemTB;
	}
	// ham kiem tra
	bool lakietxuat(){
		return diemTB > 9.5;
	}
		
};


