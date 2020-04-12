// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int subArraySum(int arr[], int n, int sum);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    cout<<subArraySum(arr, n, sum)<<endl;
	}
	return 0;
}// } Driver Code Ends

int subArraySum(int arr[], int n, int sum)
{
    unordered_map<int,int> m;
    int count=0;
    int pre_sum=0;
    
    for(int i=0;i<n;i++)
    {
        pre_sum+=arr[i];
        
        if(pre_sum==sum)
        {
            count++;
        }
        
        if(m.find(pre_sum-sum)!=m.end())
        {
            count+=m[pre_sum-sum];
        }
        
        m[pre_sum]++;
    }
    return count;
}
