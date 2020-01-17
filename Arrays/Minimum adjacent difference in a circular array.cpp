// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

// Function to find minimum adjacent difference
// arr[]: input array
// n: size of array

int min(int a, int b){
    
    return ((a<b)?a:b);
}

int minAdjDiff(int arr[], int n){    
    
    int min_val = abs(arr[1] - arr[0]);
    int diff = 0;
    int min_diff = min_val;
    
    for(int i=1; i<n; i++)
    {
        if(i==n-1)
        {
            diff = abs(arr[0] - arr[n-1]);
            min_diff = min(min_diff, diff);
            break;
        }
        
        diff = abs(arr[i+1] - arr[i]);
        
        min_diff = min(min_diff, diff);
    }
    
    return min_diff;
}

// { Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; //Input testcases
    
    while(t--) //While testcases exist
    {
        int n;
        cin>>n; //Input size of array
        
        int arr[n]; //Array of size n
        
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i]; //input elements of array
        }
        
        cout << minAdjDiff(arr, n) << endl;
    }
    return 0;
}  // } Driver Code Ends
