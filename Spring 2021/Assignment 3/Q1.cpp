// Filename: Q1.cpp
// EE 5103 Assignment 3; Problem 1
// Created function to remove duplicate elements of input array
// Miguel Lopez
// 03/23/2021
 
#include <iostream>
#include <algorithm>  // Needed for sort method.
using namespace std;

int remove_duplicates(int arr[], int n)
{
    sort(arr,arr+n);
    cout<<"The new array is : { ";
    for(int i=0;i<n;i++)
	{
	    int j=i+1;
		while(j<n)
		{
			if(arr[i]==arr[j])
			{
				for(int k=j;k<n;k++)
				{
					arr[k]=arr[k+1];
				}
				n--;
			}
			else
				j++;
		}
		cout<<arr[i]<<",";
	}
	cout<<" }\n";
	return n;
}

int main()
{
    int n;
    cout << "Enter size of the set: "<< endl;
    cin >> n;
    int arr[n];	// could also use: int *arr = new int(n);
    cout << "Enter your set of numbers: "<< endl;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    printf("\nThe new size of your array without duplicates is: %i", remove_duplicates(arr,n));
    return 0;
}
