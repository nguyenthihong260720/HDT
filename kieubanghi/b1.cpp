#include<iostream>
#include<math.h>
#define size 100
using namespace std;
void nhapDL(int &n, double dd[],double dt[]){
    cout<<"Nhap muc dinh duong: ";
    for(int i = 0; i<n; i++){
        cin >> dd[i];
    }
    cout<<"Nhap muc doc to : ";
    for(int i =0;i < n;i++){
        cin >> dt[i];
    }
}
void nam(int &n, double dd[],double dt[]){
    for(int i = 0; i<n; i++){
        if(dd[i] >= 2 * dt[i]){
            cout<<"("<<dd[i]<<","<<dt[i]<<")";
        }
    }
    cout<<endl;
}
void max(int &n, double dd[],double dt[]){
    int max=dt[0];
	int vitri=-1;
	for(int i=0;i<n;i++){
		if(dt[i]>max){
			max=dt[i];
			vitri=i;
		}
	}
	cout<<"("<<dd[vitri]<<","<<max<<")"<<endl;
}
void increase(int &n, double dd[],double dt[]){
    int max=dt[0];
	int vitri=-1;
    for(int i=0;i<n;i++){
		if(dt[i]>max){
			max=dt[i];
			vitri=i;
            
		}
	}
	cout<<"("<<dd[vitri]<<","<<max<<")"<<endl;
}
int main(){
    int n;
    cout<< "Nhap n = ";
    cin >> n;
    double dd[100]; 
    double dt[100];
    nhapDL(n,dd,dt);
    nam(n,dd,dt);
    max(n,dd,dt);
    increase(n,dd,dt);
}