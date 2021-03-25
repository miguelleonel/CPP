#include <iostream>

using namespace std;

float* read_floats(int n)
{
	float *q = new float[n];
	for (int i=0;i<n;i++)
	{
		cin>>q[i];
	}
	return q;
}

int main()
{
    float *q=read_floats(3);
    cout<<q;
    delete[] q;
	return 0;
}