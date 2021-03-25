#include <iostream>
using namespace std;

int main ()	{
	int length = 0;
	cout << "Enter how many elements exist in your array:"<< endl;
	cin >> length;
	int num[length] = {0};
	cout << "Enter the elements of your array:"<< endl;
	for (int i=0; i<length; i++) {
		cin >> num[i];
	}
	
	//int num[7] = {-1, 0, 2, 5, 6, 8, 7}; // Declared example input.

	int index = 0;
	int save = num[0];
	// Compare values inside num array
	for (int i=0; i<(sizeof(num)/sizeof(*num)); i++)	{
		if (num[i]> save)	{
			save = num[i];
			index = i;
		}
	}

	cout << "A peak is at array index "<< index <<" and the value is "<< save <<"." << endl;
	
	return 0;
}