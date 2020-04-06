// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

// function to find the triplet which sum to x
bool find3Numbers(int arr[], int n, int x)
{
    sort(arr, arr+n);
    
    for(int i=0; i<n-2; i++)
    {
        int l=i+1, r=n-1;
        
        while(l<r)
        {
            int sum = arr[l]+arr[r]+arr[i];
            
            if(sum==x)
            {
                return true;
            }
            
            else if(sum>x)
            {
                r--;
            }
            
            else
            {
                l++;
            }
        }
        
    }
    
    return false;
}


// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,sum;
		cin>>N>>sum;
		int i,A[N];
		for(i=0;i<N;i++)
			cin>>A[i];
        cout <<  find3Numbers(A, N, sum) << endl;
    }
}
  // } Driver Code Ends
