#include <iostream>
using namespace std;

int main ()	{
	const int length = 15;
	char myStr[length];
	char search;
	int num=0;
	cout << "Enter an array of 15 characters:"<<endl;
	cin>>myStr;
	cout << "Enter your single search character:"<<endl;
    cin>>search;
	for (int i=0; i<length; i++)	{
        if (myStr[i]==search)   {
            num++;
        }
	}
	cout<<"The search character of "<<search<<" is found "<<num<<" time(s)."<<endl;
	return 0;
}
