#include<iostream>
using namespace std;
// hàm trả về giá trị tuyệt đối 
    int b1(int x){
        x = abs(x);
        return x;
    }
    float b2(float x){
        x = abs(x);
        return x;
    }
    int b3(int x,int y, int z){
        int max = x;
        if(y>max){
            max = y;
        }else if(z > max){
            max = z;
        }
        return max;
    }
    float b4(float x,float y, float z){
        float max = x;
        if(y>max){
            max = y;
        }else if(z > max){
            max = z;
        }
        return max;
    }
     int b5(int x,int y, int z){
        int min = x;
        if(y<min){
            min = y;
        }else if(z < min){
            min = z;
        }
        return min;
    }
    float b6(float x,float y, float z){
        float min = x;
        if(y<min){
            min = y;
        }else if(z < min){
            min = z;
        }
        return min;
    }
    int b7(int x,int y, int z){
        int tbc = 0;
        tbc = (x + y + z)/3;
        return tbc;
    }
    float b8(float x,float y, float z){
        float tbc = 0;
         tbc = (x + y + z)/3;
         return tbc;
    }

    
int main(){
    // int n;
    // cin>>n;
    int y1 = b1(2.5);
    float y2 = b2(2);
    cout<< y1<<" "<<y2<<endl;
    int y3 = b3(7,5,6);
    float y4 = b4(9.1,5.3,6.5);
    cout<<y3<<" "<<y4<<endl;
    int y5 = b5(7,5,6);
    float y6 = b6(9.1,5.3,6.5);
    cout<<y5<<" "<<y6<<endl;
    int y7 = b7(5.8, 6, 3.2);
    float y8 = b8(5.8, 6, 3.9);
    cout<<y7<<" "<<y8;

}