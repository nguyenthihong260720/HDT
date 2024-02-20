#include<iostream>
#include<math.h>
using namespace std;
bool issdx(int num){
    int x =  num;
    int reverse = 0;
    while (num > 0)
    {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    return x == reverse;
}
int main(){
    int count = 0;
    cout << " So nguyen duong cs 5 chu so : ";
    for( int i = 10000; i < 99999; i++){
        if(issdx(i)){
            cout << i << endl;
            count++;
        }
    }
    cout << count;
}