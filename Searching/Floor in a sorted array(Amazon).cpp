// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to find floor of x
// n: size of vector
// x: element whose floor is to find
int findFloor(vector<long long> v, long long n, long long x){
    
    long long l=0, h=n-1, ans=-1;
    
    while(l<=h)
    {
        long long mid = (l+h)/2;
        
        if(v[mid] == x)
        {
            return mid;
        }
        
        else if(v[mid] < x)
        {
            ans = mid;
            l = mid+1;
        }
        
        else
        {
            h = mid-1;
        }
    }
    
    return ans;
}

// { Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    
	    cout << findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}  // } Driver Code Ends
