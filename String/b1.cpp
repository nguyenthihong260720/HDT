#include<iostream>
#include<string>
#include <cctype>
using namespace std;
// khai bao ham
string lowercase(string s);
string uppercase(string s);
string CaptitalizeEachWord(string s);
string tOGGLEcASE(string s);
int main(){
    string s;
    cout<<"Nhap chuoi : ";
    getline(cin,s);
    cout<<"Chuoi tra ve lowercase : "<< lowercase(s)<<endl;
    cout<<"Chuoi tra ve uppercase : "<< uppercase(s)<<endl;
    cout<<"Chuoi tra ve CaptitalizeEachWord : "<< CaptitalizeEachWord(s)<<endl;
    cout<<"Chuoi tra ve tOGGLEcASE : "<< tOGGLEcASE(s)<<endl;

}
string lowercase(string s){
    for(int i = 0; i< s.length(); i++){
        if(s[i] >= 'A'&& s[i] <= 'Z'){
            s[i] += 32;
        }
    }
 
    return s;
}
string uppercase(string s){
    for(int i = 0; i< s.length(); i++){
        if(s[i] >= 'a'&& s[i] <= 'z'){
            s[i] -= 32;
        }
    }
 
    return s;
}
string CaptitalizeEachWord(string s){
    for(int i = 0; i< s.length(); i++){
        if(i == 0){
            s[i] = toupper(s[i]);
        }
        else if(s[i-1] == ' '){
            s[i] = toupper(s[i]);
        }
    }
    return s;
} 
string tOGGLEcASE(string s){
    for(int i = 0; i< s.length();i++){
        if(isupper(s[i])){// hàm trả về giá trị chữ hoa
            s[i] = tolower(s[i]);// chuyển đổi thành chữ thường
        }
        else {
            s[i] = toupper(s[i]);// chữ hoa 
        }
    }
    return s;
} 


