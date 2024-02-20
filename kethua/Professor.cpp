#include<iostream>
#include<string>
#include"personkt.cpp"
class Person:: public Professor{
	private:
		int slbao;
	public: 
		// khoi tao
		Professor(){
			slbao = 0;
		}
		// ham co tham so
		Professor(string ten, int tuoi, float diemTB, int slbao)::Person(ten, tuoi){
			this -> slbao = slbao;
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
		cout <<"Nhap so luong bao : ";
		cin >> slbao;
	}
	// ham kiem tra
	bool lakietxuat(){
		return slbao >= 100;
	}
		
};


