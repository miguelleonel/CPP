#include <iostream>

using namespace std;

int matches(int arr1[],int arr2[], int size1, int size2)
{
    int count=0,size=0;
    if(size1>size2)
        size=size1;
    else
        size=size2;
	for (int i=0; i<size; i++)
	{
        if(arr1[i]==arr2[i])
            count++;
        else
            return count;
	}
	
}

int main()
{
    
	int size1=6,arr1[size1]={3,2,5,6,1,3};
	int size2=7,arr2[size2]={3,2,5,2,6,1,3};
    printf("The number of elements that match in the arrays are: %i", matches(arr1,arr2,size1,size2));
	return 0;
}