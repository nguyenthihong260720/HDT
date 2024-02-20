#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Nhap chuoi : ";
    getline(cin,s);
    int dsc = 0;
    int vitri = 0;
    for(int i = 0; i<s.length();i++){
        if(s[i] == ' '){
            dsc++;
        }
        else {
            break;
        }

    }
    cout<<"So dau cach o dau: "<<dsc<<endl;
    s.erase(0,dsc);
    cout<<"Chuoi sau khi xoa: "<<s<<endl;
    // dem so luong tu trong chuoi
    int dem = 0;
    if(s[0] != ' '){
        dem = 1;
    }
    for(int i = 0; i< s.length()-1; i++){
        if(s[i] == ' ' && s[i + 1] != ' ' ){
            dem++;
        }
    }
    cout<<"So tu trong chuoi la : "<<dem<<endl;
    // Capitalize each word
string CaptitalizeEachWord(string s);
    for(int i = 0; i< s.length(); i++){
        if(i == 0){
            s[i] = toupper(s[i]);
        }
        else if(s[i-1] == ' '){
            s[i] = toupper(s[i]);
        }
    }
    cout<<"Chuoi Captilize: "<<s;
    return 0;    
    } 


