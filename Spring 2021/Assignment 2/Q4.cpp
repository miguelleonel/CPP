#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string number;
    cout << "Enter phone number in format of (###) ###-####: "<< endl;
    getline(cin, number);

    if (number.length() == 14 && number[0] == '(' &&
		(number[1] >= '1' && number[1] <= '9') &&   //index 1 cannot accept 0.
		(number[2] >= '0' && number[2] <= '9') &&
		(number[3] >= '0' && number[3] <= '9') &&
		number[4] == ')' &&
		number[5] == ' ' &&
		(number[6] >= '0' && number[6] <= '9') &&
		(number[7] >= '0' && number[7] <= '9') &&
		(number[8] >= '0' && number[8] <= '9') &&
		number[9] == '-' &&
		(number[10] >= '0' && number[10] <= '9') &&
		(number[11] >= '0' && number[11] <= '9') &&
		(number[12] >= '0' && number[12] <= '9') &&
		(number[13] >= '0' && number[13] <= '9')) 
	{
        cout << number << " is a correctly formatted telephone number." << endl;
    } 
	else 
	{
        cout << number << " is NOT a correctly formatted telephone number." << endl;
    }
    return 0;
}