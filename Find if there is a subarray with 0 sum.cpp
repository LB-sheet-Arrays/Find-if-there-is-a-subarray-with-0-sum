#include <bits/stdc++.h>
using namespace std;

void CheckSub0Sum(int arr[],int size)
{
	int sum=0,flag=0;
	// Pick starting point
    for (int i=0; i<size; i++)
    {
        // Pick ending point
        for (int j=i; j<size; j++)
        {
        	//find sum between starting and ending point
        	sum=sum+arr[j];
        	
            //Print subarray between current starting
            //and ending points if sum is 0
            if(sum==0)
            {
            	flag=1;
            	break;
			}
        }
        sum=0;
    }
    
    if(flag==0)
    {
    	cout<<"\nFalse";
	}
	else if(flag==1)
	{
		cout<<"\nTrue";
	}
}

int main()
{
	//static inputs
	int size=11;
	int arr[size] = {6, 3, -1, -3, 4, -2, 2,4, 6, -12, -7};
	
	CheckSub0Sum(arr,size);
	
	return 0;
}
