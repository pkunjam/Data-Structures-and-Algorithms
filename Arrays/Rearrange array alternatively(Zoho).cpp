// { Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// This function wants you to modify the given input
// array and no need to return anything
// arr: input array
// n: size of array
void rearrange(int *arr, int n) 
{ 
	
	// Your code here
	int temp[n];
	int j =0;
	int l=0;
	int r=n-1;
	
	while(l<=r)
	{
	    temp[j]=arr[r];
	    temp[j+1]=arr[l];
	    l++;
	    r--;
	    j+=2;
	}
	
	for(int i=0;i<n;i++)
	{
	    arr[i] = temp[i];
	}
}

// { Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        rearrange(arr, n);
        
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 
  // } Driver Code Ends
