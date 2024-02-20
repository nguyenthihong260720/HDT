#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c ;
    float x;
    int count = 0;
     cin >>a>>b>>c;
     if(a==0){
        if(b == 0){
            c = 0;
        }
        else{
            x = -c/b;
        }
        
        count++;
        cout<<count;
     }
     else if(a!=0){
        float delta;
        delta = b*b-4*a*c;
        if(delta>0){
            x = (-b+sqrt(delta))/2*a;
            x = (-b-sqrt(delta))/2*a;
            count++;
            cout<<count;
        }
        else if(delta==0){ 
           
            x = -b/2*a;
           
            count++;
            cout<<count;
        }
        else{
            count++;
            cout<<count;
        }
     }
     
   
}