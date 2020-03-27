// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
int maxStep(int arr[], int n){
    
   int max_steps=0;
   int curr=0;
   
   for(int i=1;i<n;i++)
   {
       if(arr[i]>arr[i-1])
       {
           curr++;
           max_steps = max(curr, max_steps);
       }
       
       else
       {
           curr = 0;
       }
   }
   
   return max_steps;
}

// { Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    cout << maxStep(a, n) << endl;
	}
	return 0;
}  // } Driver Code Ends
