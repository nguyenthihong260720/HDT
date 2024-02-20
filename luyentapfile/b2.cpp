#include<iostream>
#include<fstream>

using namespace std;
int main(){
    ifstream finp;
    ofstream fout;
    finp.open("NEWS.INP");
    fout.open("NEWS.OUT");
    if(finp.fail() || fout.fail()){
        cout << "File khong thanh cong";
        return 0;
    }

    // khai bao xau
    char s;
    int kytuchu = 0;
    int kytuso = 0;
    int kytudacbiet = 0;
    while(finp.get(s)){
        if(s >='a' && s <= 'z'){
            kytuchu++;
        }
        else if(s >='0' && s <= '9'){
            kytuso++;   
        } else {
            kytudacbiet++;
        }
    }
    fout << kytuchu << " " << kytuso << " "<< kytudacbiet;
    cout << kytuchu << " " << kytuso << " " << kytudacbiet;
    finp.close();
    fout.close();


}