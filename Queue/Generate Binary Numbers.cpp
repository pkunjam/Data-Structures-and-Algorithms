// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long


 // } Driver Code Ends
// Function to print all binary numbers upto n
void generate(ll n)
{
	queue<string> q;
	
	q.push("1");
	
	for(int i=0;i<n;i++)
	{
	    string curr = q.front();
	    
	    cout<<curr<<" ";
	    q.pop();
	    
	    q.push(curr + "0");
	    q.push(curr + "1");
	}
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		generate(n);
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
