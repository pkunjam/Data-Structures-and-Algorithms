// { Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;


bool subArrayExists(int arr[], int n);
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    	if (subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}// } Driver Code Ends
//Complete this function
bool subArrayExists(int arr[], int n)
{
    unordered_set<int> s;
    int pre_sum=0;
    
    for(int i=0;i<n;i++)
    {
        pre_sum+=arr[i];
        
        if(s.find(pre_sum)!=s.end() || pre_sum==0)
        {
            return true;
        }
        s.insert(pre_sum);
    }
    return false;
}


