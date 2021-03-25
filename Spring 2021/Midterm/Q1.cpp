#include <iostream>

using namespace std;

double convert(double num)
{
	num = (num*9/5)+32;
	return num;
}

int main()
{
	double C = 0;
	printf("Enter you temperature in Centigrade to convert to F\n");
	cin>>C;
	printf("The temperature in Fahrenheit is %.2f", convert(C));
	return 0;
}