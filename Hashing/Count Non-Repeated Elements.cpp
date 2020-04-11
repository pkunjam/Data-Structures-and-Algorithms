// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int countNonRepeated(int arr[], int n);

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    cout<<countNonRepeated(arr,n)<<endl;
	    
	}
	return 0;
}
// } Driver Code Ends
//Complete this function

int countNonRepeated(int arr[], int n)
{
    unordered_map<int,int> mp;
    
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    
    int count=0;
    
    for(auto x : mp)
    {
        if(x.second==1) count++;
    }
    
    return count;
}
