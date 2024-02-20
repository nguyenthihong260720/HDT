#include<iostream>
using namespace std;
int main()
{
	for(int i = 10000 ; i < 10000; i++){
		int num = i;
		int reverse = 0;
		int original = i;
		while (num > 0)
		{
			int digi = num % 10;
			reverse = reverse * 10 + digi;
			num = num / 10;
		}
		if(original == reverse){
			cout << original<< endl;
		}
		
	}
}