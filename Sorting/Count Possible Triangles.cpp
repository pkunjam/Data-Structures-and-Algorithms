// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

long long arr[10000000];


 // } Driver Code Ends

// Please note that the input array is declared globally
// You may expand the driver code above

// Array is declared as: "long long arr[10000000];"
long long findNumberOfTriangles(long long n)
{
    long long count=0;
    
    sort(arr, arr+n);
    
    for(int i=n-1;i>1;i--)
    {
        int l=0, r=i-1;
        
        while(l<r)
        {
            if(arr[l]+arr[r]>arr[i])
            {
                count+=(r-l);
                r--;
            }
            
            else
            {
                l++;
            }
        }
    }
    
    return count;
}

// { Driver Code Starts.

int main()
{
    long long size,T;
    
    cin>>T;

    while(T--){
        
    cin>>size;

    for(int i=0;i<size;i++)
     cin>>arr[i];
     
    cout<<findNumberOfTriangles(size ) <<endl;
    }
    return 0;
}


  // } Driver Code Ends
