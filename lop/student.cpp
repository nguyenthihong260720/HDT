#include<iostream>
#include<string>
using namespace std;
class Student{
	private:
		std::string msv;
		std::string hoten;
		double dtb;
	public:
		void nhapDL(){
			std::cout << "Nhap msv : " << endl;
			std::cin >> msv;// chu y msv
			cin.ignore();			
			std::cout << "Nhap ho ten : " << endl;
			std::getline(std::cin,hoten);
			std::cout <<  " Nhap dtb = ";
			std::cin >> dtb;
		}
		void hienThi(){
			std::cout << "Thong tin sv:" << " ";
			std::cout << "Ma sv: " << msv <<  " ";
			std::cout << "Ho ten : "<< hoten <<  " ";
			std::cout << "Diem TB : " << dtb << std::endl;
			
		}
		double TrungBinh(){
			return dtb;
		}
		
		
};
int main(){
	int n = 4;
	Student students[4];
	for (int i = 0; i < n; ++i) {
       	students[i].nhapDL();
    }
    for (int i = 0; i < n - 1 ; i++) {
    	for(int j = 0; j < n - i - 1; j++){
    		if(students[j].TrungBinh() < students[j+1].TrungBinh()){
    			std::swap(students[j], students[j+1]);
    		}
		}
	}
    for (int i = 0; i < n; ++i) {
        students[i].hienThi();
    }
	
	
}
