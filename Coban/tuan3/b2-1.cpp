#include<iostream>
#include<math.h>
using namespace std;
float s1(int n, float x){
    float s = 0;
    for(int i =1;i<=n;i++){
        s += pow(x,i)/(i*(i+1));
    }
    return s;
 }
// tính S2
float s2(int n){
    float s2 = 0;
    long p =1;
    for(int i = 1; i<= n;i++){
       p = p* i;
       s2 += 1.0/ p;

    }
    return s2;
    
}
// tính S3
float s3(int n, float x){
    float s3 = 0;
    int m = 1;
    for(int i = 1; i<=n;i++){
        m = 2*i + 1;
        s3 += pow(x,m);
    }
    return s3;
}
// tính s4
float s4(){
    float s4 = 0;
        float s1,s2,s3;
        s4 = s1 + (2 *s2) + (3*s3);
        return s4;
}
int main(){
    cout<< s1(2,1)<< endl;
    cout<< s2(3)<<endl;
    cout<< s3(1,2)<<endl;
     cout<< s4;
     return 0;
 }



  
