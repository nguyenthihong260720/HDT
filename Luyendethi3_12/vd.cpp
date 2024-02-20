#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    // M? file d?u v�o v� d?u ra
    ifstream fin("string.inp");
    ofstream fout("string.out");

    // �?c s? nguy�n N t? file d?u v�o
    int N;
    fin >> N;

    // Khai b�o bi?n d? luu t?ng s? t? trong file d?u v�o
    int total = 0;

    // �?c N d�ng ti?p theo t? file d?u v�o
    for (int i = 0; i < N; i++)
    {
        // �?c m?t d�ng t? file d?u v�o v� luu v�o bi?n line
        string line;
        getline(fin, line);

        // T?o m?t lu?ng d? x? l� d�ng v?a d?c
        stringstream ss(line);

        // Khai b�o bi?n d? luu s? t? trong d�ng hi?n t?i
        int count = 0;

        // �?c t?ng t? t? lu?ng v� tang bi?n d?m
        string word;
        while (ss >> word)
        {
            count++;
        }

        // C?ng s? t? trong d�ng hi?n t?i v�o t?ng s? t?
        total += count;

        // Ghi s? t? trong d�ng hi?n t?i v�o file d?u ra
        fout << count << endl;
    }

    // Ki?m tra xem t?ng s? t? l� ch?n hay l?
    if (total % 2 == 0)
    {
        // N?u l� ch?n, ghi s? 0 v�o d?u file d?u ra
        fout.seekp(0);
        fout << 0 << endl;
    }
    else
    {
        // N?u l� l?, ghi s? 1 v�o d?u file d?u ra
        fout.seekp(0);
        fout << 1 << endl;
    }

    // ��ng file d?u v�o v� d?u ra
    fin.close();
    fout.close();

    return 0;
}

