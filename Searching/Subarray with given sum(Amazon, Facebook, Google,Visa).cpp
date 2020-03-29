// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to find the subarray with given sum k
// arr: input array
// n: size of array
void subarraySum(int arr[], int n, int s){
    
    int cur_sum=0;
    
    int i=0,start=0,flag=0;
    
    while(i<=n)
    {
        
        if(cur_sum<s)
        {
            cur_sum+=arr[i++];
        }
        
        else if(cur_sum>s)
        {
            cur_sum-=arr[start++];
        }
        
        if(cur_sum==s)
        {
            flag=1;
            break;
        }
        
    }
    
    if(flag==1)
    {
        cout<<start+1<<" "<<i;
    }
    else
    {
        cout<<-1;
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
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        subarraySum(arr, n, s);
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
