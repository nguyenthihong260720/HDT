#include <iostream>
#include <fstream>

using namespace std;

// Hàm kiểm tra xem một số có phải là số hoàn hảo không
bool isPerfectNumber(int num) {
    int sum = 1; // Tính tổng ước số đầu tiên, luôn bằng 1
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    return sum == num;
}

int main() {
    ifstream inputFile("number.inp");
    ofstream outputFile("number.out");

    if (!inputFile.is_open() || !outputFile.is_open()) {
        cerr << "Không thể mở tệp đầu vào hoặc đầu ra." << endl;
        return 1;
    }

    int M;
    inputFile >> M;

    for (int i = 2; i < M; i++) {
        if (isPerfectNumber(i)) {
            outputFile << i << endl;
        }
    }

    inputFile.close();
    outputFile.close();

    return 0;
}