// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to calculate span
// price[]: price array in input
// n: size of array
void calculateSpan(int price[], int n, int s[])
{
    stack<int> stk;
    
    stk.push(0);
    s[0]=1;
    
    for(int i=1;i<n;i++)
    {
        while(!stk.empty() && price[stk.top()]<=price[i])
        {
            stk.pop();
        }
        
        s[i] = (stk.empty())?(i+1):(i-stk.top());
        stk.push(i);
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
		int i,a[n],s[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		calculateSpan(a, n, s);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends
