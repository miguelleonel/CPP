#include <iostream>
using namespace std;

int main ()	{
	char myChar[26] = "All the world’s a stage";
	cout << myChar << endl;
	double Big[100];
	cout << "An array of 100 doubles were declared and the addresses of the\
	16th, 45th and 90th doubles in that array are as follows:" <<endl;
	cout << &Big[15] <<endl<< &Big[44]<<endl << &Big[89] <<endl;
	return 0;
}
