// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to sort the given array according to
// the difference with K
// A[]: input array
// N: size of array

int comp(int a, int b)
{
    return abs(a)<abs(b);
}

void sortABS(int arr[],int n, int k)
{
    
   for(int i=0;i<n;i++)
   {
       arr[i]-=k;
   }
   
   stable_sort(arr, arr+n, comp);
   
   for(int i=0;i<n;i++)
   {
       arr[i]+=k;
   }
}


// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    
	    int N, diff;
	    cin>>N>>diff;
	    int A[N];
	    
	    for(int i = 0; i<N; i++)
	        cin>>A[i];
	   
	    sortABS(A, N, diff);
	    
	    for(int & val : A)
	        cout<<val<<" ";
	    cout<<endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
