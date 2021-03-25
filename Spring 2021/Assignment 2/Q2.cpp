#include <iostream>
#include <cstring>
using namespace std;
// Did not finish
int main()
{	
	string s = "";
	cout << "Enter your input string: "<< endl;
	cin >> s;
    int n = s.length();
	int i=0;
    char str[n];
    strcpy(str, s.c_str());

	if (i >= n) 
	{
        cout << str << endl;
        return;
    }
 
    for (int j = 0; j < n; j++) 
	{
		
    }
	
	
	
    return 0;
}