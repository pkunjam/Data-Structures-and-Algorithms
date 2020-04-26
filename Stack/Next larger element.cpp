// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to store Next larger elements


void nextLargerElement(long long arr[], int n){
    
    long long res[n];
    stack<long long> s;
    
    res[n-1]=-1;
    s.push(arr[n-1]);
    
    for(int i=n-2;i>=0;i--)
    {
        while(!s.empty() && s.top()<=arr[i])
        {
            s.pop();
        }
        
        res[i] = (s.empty())?-1:s.top();
        
        s.push(arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
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
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        nextLargerElement(arr, n);
        
        cout<<endl;
    }
	return 0;
}
  // } Driver Code Ends
