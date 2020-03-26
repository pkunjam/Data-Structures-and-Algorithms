// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int arr[5000001];


 // } Driver Code Ends
// Function to count number of Ones
// arr: input array declared globally
// n: size of input array
int countOnes(int n)
{
    
    int l=0, h=n-1;
    int leftmostIndex=0;
    
    for(int i=l; i<=h; i++)
    {
        int mid = (l+h)/2;
        
        if(mid == 0 && arr[mid] == 0)
        {
            return 0;
        }
        
        else if(mid == 0 && arr[mid] == 1)
        {
            return 1;
        }
        
        else if(mid == n-1 && arr[mid] == 1)
        {
            return leftmostIndex+mid+1;
        }
        
        if(arr[mid] == 0 && arr[mid-1] == 1)
        {
            return leftmostIndex+mid;
        }
        
        else if(arr[mid] == 1 && arr[mid+1] == 0)
        {
            return leftmostIndex+mid+1;
        }
        
        else if(arr[mid] != 0)
        {
            l=mid+1;
        }
        
        else if(arr[mid] == 0)
        {
            h=mid-1;
        }
    }
    
    return 0;
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
                
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        
        cout <<countOnes(n)<<endl;
    }
    return 0;
}  // } Driver Code Ends
