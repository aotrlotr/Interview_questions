#include <iostream>
 
using namespace std;
 
 
int BubbleSort (int arr[], int n)
{
	int i, j;
    int count=0;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n-i-1; ++j)
		{
			
			if (arr[j] > arr[j+1])
			{
				arr[j] = arr[j]+arr[j+1];
				arr[j+1] = arr[j]-arr[j + 1];
				arr[j] = arr[j]-arr[j + 1];
                count++;
			}
		}
		
	}
    return count;	
}	
 
int main()
{
	int n, i;
	
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		
		cin>>arr[i];
	}
 
	int result = BubbleSort(arr, n);
 
	
	
cout<<result;
 
	return 0;
}