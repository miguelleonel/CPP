#include <iostream>
using namespace std;
int main ()	{
	cout<<"The size of int is "<<sizeof(int)<< " bytes" << endl;
	cout<<"The size of short int is "<<sizeof(short int)<< " bytes" << endl;
	cout<<"The size of long int is "<<sizeof(long int)<< " bytes" << endl;
	cout<<"The size of unsigned short int is "<<sizeof(unsigned short int)
	<< " bytes" << endl;
	cout<<"The size of unsigned long int is "<<sizeof(unsigned long int)
	<< " bytes" << endl;
	cout<<"The size of unsigned long long int is "<<sizeof(unsigned long long int)
	<< " bytes" << endl;
	cout<<"The size of double is "<<sizeof(double)<< " bytes" << endl;
	cout<<"The size of long double is "<<sizeof(long double)<< " bytes" << endl;
	cout<<"The size of long long is "<<sizeof(long long)<< " bytes" << endl;
	cout<<"The size of float is "<<sizeof(float)<< " bytes" << endl;
	cout<<"The size of char is "<<sizeof(char)<< " byte" << endl;
	cout<<"The size of bool is "<<sizeof(bool)<< " byte" << endl;
	cout<<"The size of short is "<<sizeof(short)<< " bytes" << endl;
	cout<<"The size of wide character is "<<sizeof(wchar_t)<< " bytes" << endl;

	return 0;
}
