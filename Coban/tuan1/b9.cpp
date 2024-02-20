#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int a, b, c, d, tmp = number;  // 8661
    a = tmp % 10; tmp /= 10;
    b = tmp % 10; tmp /= 10;
    c = tmp % 10; tmp /= 10;
    d = tmp % 10;

    int s1 = a + b + c + d;
    int s2 = a * b * c * d;
    cout << a << "+" << b << "+" << c << "+" << d << "=" << s1 << endl;
    cout << a << "*" << b << "*" << c << "*" << d << "=" << s2 << endl;

    int s3 = a + b; 
    cout << s3 << endl;

    int s4 = a * 1000 + b * 100 + c * 10 + d; 
    cout << s4 << endl;

    int sonut = s1 % 10;  
    cout << sonut << endl;
    return 0;
}
