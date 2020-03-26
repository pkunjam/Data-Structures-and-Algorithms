// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

long long int floorSqrt(long long int x);
  

 // } Driver Code Ends
// Function to find square root
// x: element to find square root
long long int floorSqrt(long long int x) 
{
    long long int start = 1, end = x, floor_val;
    long long int mid;
    
    if(x==0 || x==1)
    {
        return x;
    }
    
    while(start<=end)
    {
        mid = (start + end)/2;
        
        if(mid*mid == x)
        {
            return mid;
        }
        
        else if(mid*mid < x)
        {
            start = mid+1;
            floor_val = mid;
        }
        
        else
        {
            end = mid-1;
        }
    }
    
    return floor_val;
}

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout << floorSqrt(n) << endl;
	}
    return 0;   
}
  // } Driver Code Ends
