#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int x = 11;         //Global variables.
    char ast ='*';
    char car ='^';
    
    for(int i=1;i<=x;i=i+2)
	{
    	cout<<"\t \t \t \t \t \t \t \t \t";
    	if((i/2 & 1) == 1)              //Runs on odd
		{
    		for(int j=0;j<(x-i)/2;j++)  //Used for spacing before char
			{
				cout<<' ';
			}
    		for(int j=0;j<i;j++)        //Prints out odd number of carets only when this side of the if{} runs.
			{
				cout<<car;
			}
    		cout<<"\n";
		}
    	else             //Runs on even
		{
			for(int j=0;j<(x-i)/2;j++)  //Used for spacing before char
			{
				cout<<' ';
			}
			for(int j=0;j<i;j++)        //Prints out odd number of asteriks only when this side of the if{} runs.
			{
				cout<<ast;
			}
			cout<<"\n";
		}
	}
    return 0;
}
