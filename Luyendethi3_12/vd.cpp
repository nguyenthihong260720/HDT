#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    // M? file d?u vào và d?u ra
    ifstream fin("string.inp");
    ofstream fout("string.out");

    // Ð?c s? nguyên N t? file d?u vào
    int N;
    fin >> N;

    // Khai báo bi?n d? luu t?ng s? t? trong file d?u vào
    int total = 0;

    // Ð?c N dòng ti?p theo t? file d?u vào
    for (int i = 0; i < N; i++)
    {
        // Ð?c m?t dòng t? file d?u vào và luu vào bi?n line
        string line;
        getline(fin, line);

        // T?o m?t lu?ng d? x? lý dòng v?a d?c
        stringstream ss(line);

        // Khai báo bi?n d? luu s? t? trong dòng hi?n t?i
        int count = 0;

        // Ð?c t?ng t? t? lu?ng và tang bi?n d?m
        string word;
        while (ss >> word)
        {
            count++;
        }

        // C?ng s? t? trong dòng hi?n t?i vào t?ng s? t?
        total += count;

        // Ghi s? t? trong dòng hi?n t?i vào file d?u ra
        fout << count << endl;
    }

    // Ki?m tra xem t?ng s? t? là ch?n hay l?
    if (total % 2 == 0)
    {
        // N?u là ch?n, ghi s? 0 vào d?u file d?u ra
        fout.seekp(0);
        fout << 0 << endl;
    }
    else
    {
        // N?u là l?, ghi s? 1 vào d?u file d?u ra
        fout.seekp(0);
        fout << 1 << endl;
    }

    // Ðóng file d?u vào và d?u ra
    fin.close();
    fout.close();

    return 0;
}

