// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
void max_of_subarrays(int *arr, int n, int k){
    
    deque<int> dq;
    
    for(int i=0;i<k;i++)
    {
        while(!dq.empty() && arr[i]>=arr[dq.back()])
        {
            dq.pop_back();
        }
        
        dq.push_back(i);
    }
    
    for(int i=k;i<n;i++)
    {
        cout<<arr[dq.front()]<<" ";
        
        while(!dq.empty() && dq.front()<=(i-k))
        {
            dq.pop_front();
        }
        
        while(!dq.empty() && arr[i]>=arr[dq.back()])
        {
            dq.pop_back();
        }
        
        dq.push_back(i);
    }
    
    cout<<arr[dq.front()]<<" ";
}


// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    
	    max_of_subarrays(arr, n, k);
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
