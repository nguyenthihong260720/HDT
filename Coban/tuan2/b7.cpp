#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	float S1=0,S2=0,S3=0;
	for (int i = 1;i<=n;i++){
		S1 += 1.0/float(i*(i+1));
	}
	for(int i = 1;i<=n;i++){
	
		S2 = sqrt(S2+3);
	}
	
	for(int i=1;i<=n;i++){
		S3 += 1.0 / float(i*(i+1)/2); 
	}
	cout<<fixed<<setprecision(3)<<S1<<" "<<S2<<" "<<S3;
}
