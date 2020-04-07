// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
// Function to find the index of x
// arr[]: input array
// n: size of array
// x: element to find index
int closer(int arr[],int n, int x)
{
    
    int l=0,h=n-1;
    
    while(l<h)
    {
        int mid=(l+h)/2;
        
        if(arr[mid]==x)
        {
            return mid;
        }
        
        else if(arr[mid+1]==x)
        {
            return mid+1;
        }
        
        else if(arr[mid-1]==x)
        {
            return mid-1;
        }
        
        else if(arr[mid]<x)
        {
            l=mid+1;
        }
        
        else
        {
            h=mid-1;
        }
    }
    
    return -1;
}

// { Driver Code Starts.

int main() {
    
    cin.tie(NULL);
    
	int t;
	cin >> t;
	
	while(t--){
	  
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    int x;
	    cin >> x;
	    
	    int res = closer(arr,n,x);
	    
	    cout << res << endl;
	}
	
	return 0;
}  // } Driver Code Ends
