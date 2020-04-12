// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

long long int countSubarrWithEqualZeroAndOne(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<< countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}
// } Driver Code Ends
long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
{
    unordered_map<int,int> m;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            arr[i]=-1;
        }
    }
    
    int pre_sum =0;
    int count=0;
    int sum=0;
    
    for(int i=0;i<n;i++)
    {
        pre_sum+=arr[i];
        
        if(pre_sum==sum)
        {
            count++;
        }
        
        if(m.find(pre_sum)!=m.end())
        {
            count+=m[pre_sum];
        }
        m[pre_sum]++;
    }
    
    return count;
}
