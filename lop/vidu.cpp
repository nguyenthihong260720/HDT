#include <iostream>

class Fraction {
private:
    int a, b;

public:
    // Phuong th?c nh?p d? li?u t? b�n ph�m
    void input() {
        std::cout << "Nhap tu so: ";
        std::cin >> a;
        do {
            std::cout << "Nhap mau so (khac 0): ";
            std::cin >> b;
        } while (b == 0);
    }

    // Phuong th?c hi?n th? d? li?u ra m�n h�nh
    void display() const {
        std::cout << a << "/" << b;
    }

    // Phuong th?c r�t g?n ph�n s?
    void simplify() {
        int gcd = greatestCommonDivisor(a, b);
        a /= gcd;
        b /= gcd;
    }

    // Phuong th?c so s�nh hai ph�n s?
    int compare(const Fraction& other) const {
        int numerator1 = a * other.b;
        int numerator2 = other.a * b;

        return numerator1 - numerator2;
    }

    // T�m u?c chung l?n nh?t c?a hai s?
    int greatestCommonDivisor(int x, int y) const {
        while (y != 0) {
            int temp = y;
            y = x % y;
            x = temp;
        }
        return x;
    }
};

int main() {
    const int n = 3;  // S? lu?ng d?i tu?ng Fraction

    Fraction fractions[n];  // M?ng ch?a c�c d?i tu?ng Fraction

    // Nh?p d? li?u cho c�c d?i tu?ng Fraction
    for (int i = 0; i < n; ++i) {
        std::cout << "Nhap thong tin cho phan so thu " << i + 1 << ":" << std::endl;
        fractions[i].input();
        fractions[i].simplify();  // R�t g?n ph�n s? sau khi nh?p
    }

    // S?p x?p c�c ph�n s? t? nh? d?n l?n v� hi?n th? th�ng tin d� r�t g?n c?a ph�n s?
    std::cout << "\nThong tin cac phan so da rut gon tu nho den lon:" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (fractions[i].compare(fractions[j]) > 0) {
                // Swap
                Fraction temp = fractions[i];
                fractions[i] = fractions[j];
                fractions[j] = temp;
            }
        }
        fractions[i].display();
        std::cout << "   ";
    }

    return 0;
}
