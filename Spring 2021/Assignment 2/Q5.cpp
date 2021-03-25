#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() 
{
	int n;
	double mean=0, median=0, stdev=0, var=0, mode=0;
	double ans1=0,ans2=0;
	int count=1, countMode = 1;
	
	cout << "How many elements are in your sequence?"<< endl;
	cin>>n;
	double seq[n];
	cout << "Enter your sequence:"<< endl;
	for (int i = 0; i<n; i++)
    	{
    		cin >> seq[i];
    	}
	int ans3 = seq[0];
	if (n>1)
	{
		//sorting array
		sort(seq, seq+n);
	    //Mena
    	for (int i = 0; i<n; i++)
    	{
    		ans1 +=seq[i];
    	}
		mean = ans1/n;
    	cout << mean <<endl;

		
		//Variance
    	for (int i = 0; i<n; i++)
    	{
			ans2+=pow((seq[i]-mean),2);
		}
		var = ans2/(n-1);
    	cout << var <<endl;
		//Standard Deviation
		stdev = sqrt(var);
		cout << stdev <<endl;
		
		//Median

		if(n%2)
		{
			median = seq[n/2];
		}
		else
		{
			median = (seq[(n/2)/2]+seq[n/2])/2;
		}
		cout << median<<endl;
		
		
		//Mode
		for (int i = 1; i<n; i++)
		{
			if(seq[i]==ans3)
			{
				count++;
			}
			else 
			{
				if (count>countMode)
				{
					countMode=count;
					mode=ans3;
				}
				count=1;
				ans3=seq[i];
			}
		}
		if(count>countMode)
		{
			countMode=count;
			mode = ans3;
		}
		//mode=ans3;
		cout<<mode;
    }
    else
        cout << "The mean, median, mode is "<< seq[0]<< 
        " and the standard deviation and variance is 0."<<endl;
        
	return 0;
}