// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void printNonRepeated(int arr[],int n);


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
	    
	    printNonRepeated(arr,n);
	    
	    cout<<endl;
	    
	}
	return 0;
}// } Driver Code Ends
// Function to print the non repeated elements in the array
// arr[]: input array
// n: size of array
void printNonRepeated(int arr[],int n)
{
    unordered_map<int,int> mp;
    
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]==1)
        {
            cout<<arr[i]<<" ";
        }
    }
}
