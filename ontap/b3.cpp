#include<iostream>
#include<string>
#define size 100
using namespace std;
class NhanVien{
	public:
		string name;
		string birthday;
		bool gender;
		string home;
		string work;
		int luong;
		int age;
	public:
		// ham tao khong tham so
		NhanVien(){
			name = "";
			birthday = "";
			gender = false;
			home = "";
			work = "";
			luong = 0;
			age = 0;
		}
		// ham tao co tham so
		NhanVien(string name, string birthday, bool gender, string home, string work){
			this->name = name;
			this->birthday = birthday;
			this->gender = gender;
			this->home = home;
			this->work = work;
			this->luong=luong;
			this->age=age;
		}
		// ham huy
		~NhanVien(){}
		// ham nhap
		void input(){
			cout << "Nhap ho ten : " ;
			cin.ignore();
			getline(cin, name);
			
			
			cout <<"Nhap home : ";
			getline(cin,home);
			
			cout <<"Nhap work: ";
			getline(cin, work);
			
			cout << "Nhap birthday : ";
			getline(cin, birthday);
			
			cout << "Nhap gender : ";
			cin >> gender;
			
			cout <<"Nhap luong : ";
			cin >> luong;
			
			cout <<"Nhap tuoi : ";
			cin>>age;
		}
		// ham hien thi
		void display(){
			cout << name << " " << birthday << " " << (gender?"Nam":"Nu") <<" "<< home << " " << work <<" " <<luong << " " << age << endl;
		}
		
		
};
int main(){
	
	int n;
	cout << "Nhap n = ";
	cin >> n;
	
	NhanVien nv[n];
	for(int i = 0 ; i < n; i++){
		nv[i].input();
	}
	cout << endl;
	for(int i = 0 ; i < n; i++){
		nv[i].display();
	}
	cout << endl;
	for(int i = 0 ; i < n; i++){
		if(nv[i].home == "Ha Noi"){
			nv[i].display();
		}
	}
	cout << endl;
	
	int tong = 0;
	for(int i = 0 ; i < n; i++){
		tong += nv[i].luong;
	}
	float TBC = tong / n;
	cout <<"Tong luong trung binh la "<< TBC << endl;
	cout << endl;
	
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1 ; j < n;j++){
			if(nv[i].luong < nv[j].luong){
				NhanVien temp = nv[i];
				nv[i] = nv[j];
				nv[j] = temp;
			}
			nv[j].display();	
		}
		nv[i].display();
	}
	cout << " ";
	cout << endl;
	
	// tinh tuoi nv
	int count = 0;
	for(int i = 0; i<n;i++){
		if(nv[i].age >= 30){
			count++;
		}
	}
	cout << "Nguoi co so tuoi lon hon 30: " << count;
	cout << endl;
	
	
}
