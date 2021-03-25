#include <iostream>
using namespace std;

//You need to implement two functions below.

//Function 1: 25 points
bool exists_trio(int*,int);
//Input: 
	//an integer array (param 1) and its size (param 2)

//Output: 
	//True or false

//Behavior: 
	//Returns true is there exists 
	//a sequence of 3 *consecutive* values in the array
	//such that the sum of the first two elements
	//is equal to the third element in that
	//sequence, false otherwise.

//Example:
	//For the array {3,4,1,3,17,3,20,21,5,96},
	//the function returns true because of the 
	// sequence {17,3,20} (i.e., 17+3=20).

	//For the array {3,4,1,3,3,7},
	//the function returns false.

//Function 2: 25 points
bool exists_trio_within_distance(int*,int,int);
//Input: 
	//an integer array (param 1), its size (param 2), and
	//a distance (param 3)

//Output: 
	//True or false

//Behavior:
	//Returns true is there exists 
	//a sequence of 3 values in the array
	//such that sum of the first two elements
	//is equal to the third element in the
	//sequence. The third element has to be 
	//within a distance of dist from the 
	//second element.
	//False otherwise.

//Example:
	//For the array {3,4,1,3,17,3,96,21,5,20},
	//if dist is 7
	//the function returns true because 
	// 4+1=5 and the element 5 is within 7 spots
	//from element 1.

	//For the array {3,4,1,3,3,7},
	//if dist is 2,
	//the function returns false.
	//This is because, even though, for example, 3+4=7,
	//element 7 is not within a distance of 2
	//from element 4.

int main()
{
	const int asize=10;
	int a[asize]={3,4,1,3,17,3,20,21,5,20};

	const int bsize=6;
	int b[bsize]={3,4,1,3,3,7};
	//////////////////////////////////////////

	//test exists_trio function

	//should print "A trio exists."
	if (exists_trio(a,asize))
		cout << "A trio exists.\n";
	else
		cout << "A trio does not exist.\n";

	//should print "A trio does not exist."
	if (exists_trio(b,bsize))
		cout << "A trio exists.\n";
	else
		cout << "A trio does not exist.\n";

	cout << "=========================\n";

	//////////////////////////////////////////////

	//test exists_trio_within_distance function

	//if you only want to test exists_trio, comment
	//out the below code

	//change the array a to help test Function 2
    a[6]=209; //change a[6] from 20 to 209
	int dist=7;
	//should print "A trio exists within distance 7."
	if (exists_trio_within_distance(a,asize,dist))
		cout << "A trio exists within distance " << dist << "." << endl;
	else
		cout << "A trio does not exist within distance " << dist << "." << endl;

	dist=2;
	//should print "A trio does not exist within distance 2."
	if (exists_trio_within_distance(b,bsize,dist))
		cout << "A trio exists within distance " << dist << "." << endl;
	else
		cout << "A trio does not exist within distance " << dist << "." << endl;
}

bool exists_trio(int* arr,int size)
{
	for(int i=2;i<size;i++)
	{
		if(arr[i-2]+arr[i-1]==arr[i])
		{
			return true;
		}
	}
	return false;
}


bool exists_trio_within_distance(int* arr,int size, int distance)
{
	for(int i=2;i<size;i++)
	{
	    for(int j=2;j<i+distance;j++)
		{
			if(arr[i-2]+arr[i-1]==arr[j])
			{
			    //cout<<arr[j]<<endl; //Tested for what value matches a sum of two elements. 
				return true;
			}
		}
	}
	return false;
}
