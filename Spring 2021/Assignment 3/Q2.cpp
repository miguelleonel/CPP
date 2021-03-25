// Filename: Q2.cpp
// EE 5103 Assignment 3; Problem 2
// Miguel Lopez
// 03/23/2021

#include <iostream>
#include <stdexcept> //needed for invalid_argument
using namespace std;

int* insert_after(int* a, int csz, int cap, int after, int val);

int main ()
{
	int i,n,csz,cap,after,val;
	int *ip=NULL; // To hold address of returned value from insert function.
	n=4;
	int *a{new int[n] {3,14,9,26}};
	csz = n;
	cap = csz+2;    // or remove '+2' to test cap==csz, or 0 to test error exit.
	after = 14;
	val = 15;
	ip = insert_after(a, csz, cap, after, val);
	if (ip)         // runs when ip returns new memory address
	{
	    cout<<"The insert function DID make new array. cap==csz"<<endl;
    	for(i = 0; i < csz+1; i++) 
    	{
          cout<< *ip <<", ";
          ip++;
        }
	}
	else if (ip==NULL)   // runs when ip returns NULL
	{
	    cout<<"The insert function DID NOT make new array. cap>csz"<<endl;
	    for(i = 0; i < csz+1; i++)
		cout << a[i] << ", ";
	}
	delete[] a;
	return 0;
}

int* insert_after(int *a, int csz, int cap, int after, int val)
{
    int index;
	if (csz>cap)
	{
		printf ("Error: Capacity should be equal to or greater than current size!");
        exit (EXIT_FAILURE);
	}
	else if (csz<cap)	// ARRAY HAS SPACE AVAILABLE
	{
		for(int i = 0; i < csz; i++)
		{	// for loop to find index of "after" element
			if(a[i] == after)
				index = i;
		}
		for(int i = csz-1; i > index; i--)
		{	// for loop that pushes elements back inside of array until element 'after' aka index
		    a[i+1] = a[i];
		}
		a[index+1] = val;	// inserts value into array
		csz++;				// increases size
		return NULL;
	}
	else if (csz==cap)	// ARRAY IS FULL HERE
	{
		cap++;
		int *temp = new int[cap];
		copy(a, a + cap, temp);
		a = temp;
		// These lines above make a new temp. array w/ increased cap
		for(int i = 0; i < csz; i++)
		{	// for loop to find index of "after" element
			if(a[i] == after)
				index = i;
		}
		for(int i = csz-1; i > index; i--)
		{	// for loop that pushes elements back inside of array until element 'after' aka index
		    a[i+1] = a[i];
		}
		a[index+1] = val;	// inserts value into array
		csz++;				// increases size
	    return a;
	}
}