// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to find the minimum element in sorted and rotated array
// arr: input array
// low and high are 0 and n-1, where n is the size of arr
int minNumber(int arr[], int l, int h)
{
    const int start = 0, end = h;
    
    if(arr[0] > arr[1])
    {
        return arr[1];
    }
    
    if(arr[end-1] > arr[end])
    {
        return arr[end];
    }
    
    while(l<=h)
    {
        int mid = (l+h)/2;
        
        if(arr[mid] > arr[mid+1])
        {
            return arr[mid+1];
        }
        
        if(arr[mid] < arr[mid-1])
        {
            return arr[mid];
        }
        
        else if(arr[mid] < arr[start])
        {
            return minNumber(arr, l, mid-1);
        }
        
        else if(arr[mid] > arr[end])
        {
            return minNumber(arr, mid+1, h);
        }
        
        else 
        {
            return arr[mid-1];
        }
    }
    
}

// { Driver Code Starts.


int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];		
		cout << minNumber(a,0,n-1) << endl;
	}
	return 0;
}  // } Driver Code Ends
