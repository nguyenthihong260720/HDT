#include <iostream>
using namespace std;
class Circle {
private:
    int x, y, r;
public:
    void nhapDL() {
        std::cout << "Nhap x =  ";
        std::cin >> x;
        std::cout << "Nhap y =  ";
        std::cin >> y;
        std::cout << "Nhap r =  ";
        std::cin >> r;
    }
    double chuvi()  {
        return 2 * 3.14 * r;
    }
    double dientich()  {
        return 3.14 * r * r;
    }
};
int main() {
     int n = 3;  
    Circle circles[3];  
    for (int i = 0; i < n; ++i) {
        std::cout << "Nhap thong tin cho hinh tron thu " << i + 1 << ":" << std::endl;
        circles[i].nhapDL();
    }  

    for (int i = 0; i < n; ++i) {
    	std::cout << "Chu vi hinh tron thu " << i + 1 << ": " << circles[i].chuvi() << std::endl;
        
    }

    for (int i = 0; i < n; ++i) {
    	std::cout << "Dien tich hinh tron thu " << i + 1 << ": " << circles[i].dientich() << std::endl;
        
    }

    return 0;
}
