#include <iostream>
#include<math.h>
using namespace std;


int main()
{
   int n;
   cout << "Enter size of the set: "<< endl;
   cin >> n;
   int arr[n];
   cout << "Enter your set of numbers: "<< endl;
   for(int i=0;i<n;i++)
   {
       cin >> arr[i];
   }
   int count = pow(2,n);

   for (int i = 0; i < count; i++)
   {	   
		cout<<"\n{ ";
		for (int j = 0; j < n; j++)
		{
			if ((i & (1 << j)) > 0)
			{
				   cout << arr[j] << " ";
			}
		}
		cout << "} ";
   }
	return 0;
}