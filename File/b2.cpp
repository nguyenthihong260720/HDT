#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void nhapDL(int n, int *p){
    cout<<"nhap day so nguyen : "<<endl;
    for(int i = 0; i<n;i++){
        cout<<"a["<<i<<"]=";
        cin>>*(p+i);
    }
}
void dayso(int n, int *p){
    cout<<"Day so nguyen da nhap: "<<endl;
    for(int i = 0; i<n;i++){
        cout<<*(p+i)<<" "<<endl;
    }
}

bool check(int n){
    if(n<2){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
    
}
void songuyento(int n, int *p){
    int count = 0;
    for(int i = 0; i<n;i++){
        if(check(*(p+i)) == true)
            count++;
        
    }
    cout<<count;
}
int main()
{
    int n;
    cout<<"Nhap n = ";
    cin>>n;
    int *p ;    
         p = new int[n];
    nhapDL(n,p);
    dayso(n,p);
    cout<<"So luong so nguyen to: ";
    songuyento(n,p);
    
}

