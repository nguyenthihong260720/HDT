#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
void doc_file(ifstream &finp, float a[], int &n){
   finp.open("diem.inp");
   if(!finp.is_open()){
         cout<<"Mo file khong thanh cong"<<endl;
   }
   else{
        cout<<"Mo file thanh cong"<<endl;
   }
   finp >> n;
   for(int i = 0; i < n; i++){
        finp >> a[i];
   }
   

}
float diemTB(float a[], int n){
    float sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + a[i];
    }
    sum = sum /n;
    return sum;
}
float max(float a[], int n){
    float max = a[0];
    for(int  i = 0; i < n; i++)
    {
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}
float min(float a[], int n){
    float min = a[0];
    for(int  i = 0; i < n; i++)
    {
        if(a[i]< min){
            min = a[i];
        }
    }
    return min;
}
int count(float a[], int n){
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 6.5)
        {
            dem++;
        }    
    }  
    return dem;
}
void cout_file(ofstream &fout, float a[], int &n ){
     fout.open("diem.out");
   if(!fout.is_open()){
         cout<<"Tao file khong thanh cong"<<endl;
   }
   else{
        cout<<"Tao file thanh cong"<<endl;
   }
    fout<<fixed << setprecision(2) << diemTB(a, n)<<endl;
    fout<<fixed << setprecision(1) << max(a, n)<<" ";
    fout<<fixed << setprecision(1) << min(a, n)<<endl;
    fout<<count(a,n);
}

int main(){
    float a[100];
    int n; 
    ifstream finp;
	ofstream fout;
    doc_file(finp,a,n);
    cout_file(fout,a,n);
    
}