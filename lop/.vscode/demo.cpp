#include<iostream>
#include<math.h>
using namespace std;
class DIEM {
    int x,y;
    void Hhap(int x1, int y1);
    double KC();
    void Hienthi();
};
// trien khai ham thanh phan
void DIEM::Nhap(int x1, int y1){
    x = x1;
    y = y1;
}
double DIEM::KC(){
    double d;
    d = sqrt(x * x + y * y);
}
void DIEM::Hienthi(){
    cout << "Diem hien thoi : ";
    cout << "("<< x << ","<<y <<")";
    cout << endl;
}
 main(){
    // khai bao va su dung lop
    DIEM A;
    A.Nhap(10,20);
    A.Hienthi();
    DIEM B;
    B = A;
    B.Hienthi();
    return 0;
}