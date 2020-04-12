#include <bits/stdc++.h>
using namespace std;

int ZeroSum(int arr[], int n){
    
    unordered_map<int,int> m;
    int count=0;
    int sum=0;
    
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        
        if(sum==0)
        {
            count++;
        }
        
        if(m.find(sum)!=m.end())
        {
            count+=m[sum];
        }
        m[sum]++;
    }
    return count;
}

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    cout<<ZeroSum(arr,n)<<endl;
	}
	
	return 0;
}
