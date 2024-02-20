#include<iostream>
#include<fstream>
#define size 100
using namespace std;
int main()
{
    ifstream finp;
    ofstream fout;
    finp.open("anhdat.inp");
    fout.open("anhdat.out");
    if(finp.fail() || fout.fail()){
        cout << "file khong thanh cong";
    }
    
    int n,m;
    finp >> n;
    finp >> m;

    int a[100][100];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n ;j++){
            finp >> a[i][j];
        }
    }
    int min = a[0][0];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n ;j++){
            if(min > a[i][j])
                min = a[i][j];
        }
    }
    int max = a[0][0];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n ;j++){
            if(max < a[i][j])
                max = a[i][j];
        }
    }
    int dem = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n ;j++){
            if(a[i][j] < 70)
                dem++;
        }
    }

    fout <<"Diem toi nhat : " << min<< endl;  
    fout <<"Diem sang nhat : " << max<< endl;  
    fout <<"So diem anh nho hon 70 : " << dem << endl;  

    finp.close();
    fout.close();
    
    return 0;
}