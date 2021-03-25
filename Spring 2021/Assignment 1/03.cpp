#include <iostream>
using namespace std;

int main ()	{
	double currentGrain = 1,Input=0, totalGrain=1;
	int square = 1;
	cout<<"How many grains of rice do you want?"<<endl;
	cin>>Input;
	
    while (totalGrain<Input) {
	    currentGrain*=2;
		totalGrain+=currentGrain;
		square++;
	}
	
	cout<<"You will need at least "<<square<<" squares(s)."<<endl;
	
	
	return 0;
}