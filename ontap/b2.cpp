#include <iostream>
#include <fstream>
#define size 100;
using namespace std;
int timsonguyen(int A[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] == x)
        {
            return true;
        }
    }
    return false;
}
void sapxep(int A[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (A[i] > A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

void inMang(ofstream &fout, int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        fout << A[i] << " ";
    }
    fout << endl;
}
int main()
{
    ifstream finp;
    finp.open("songuyen.inp");
    if (finp.fail())
    {
        cout << "Mo file khong thanh cong!";
        return 0;
    }

    ofstream fout;
    fout.open("songuyen.out");
    if (fout.fail())
    {
        cout << "Tao file khong thanh cong!";
        return 0;
    }

    int n = 0, A[100];
    while (!finp.eof())
    {
        finp >> A[n];
        n++;
    }

    // inMang(fout, A, n);
    int n1 = 0, chuan[100];
    for (int i = 0; i < n; i++)
    {
        if (!timsonguyen(chuan, n1, A[i]))
        {
            chuan[n1] = A[i];
            n1++;
        }
    }
    fout << n1 << endl;
    // inMang(fout, chuan, n1);
    //  so chan
    int crr[100],a = 0;
    int lrr[100], b = 0;
    for (int i = 0; i < n1; i++)
    {
        if (chuan[i] % 2 == 0)
        {
            crr[a] = chuan[i];
            a++;
        }
        else
        {
            lrr[b] = chuan[i];
            b++;
        }
    }
    sapxep(crr, a);
    sapxep(lrr, b);
    inMang(fout, crr, a);
    inMang(fout, lrr, b);

    finp.close();
    fout.close();
    return 0;
}

