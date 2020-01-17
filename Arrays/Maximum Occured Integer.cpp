// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int arr[1000000];


 // } Driver Code Ends
// L and R are input array
// maxx : maximum in R[]
// n: size of array
// arr[] : declared globally with size equal to maximum in L[] and R[]
int maxOccured(int L[], int R[], int n, int maxx){

    for (int i=0; i<maxx; i++)
    {
        arr[i]=0;
    }
    
    for(int i=0; i<n; i++)
    {
        arr[L[i]]++;
        arr[R[i]+1]--;
    }
    
    int max = arr[0];
    int res = 0; 
    
    for(int i=1; i<maxx; i++)
    {
        arr[i] += arr[i-1];
        
        if(max < arr[i])
        {
            max = arr[i];
            res = i;
        }
    }
    
    return res;
}

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int L[n];
	    int R[n];
	    for(int i = 0;i<n;i++){
	        cin >> L[i];
	    }
	    
	    int maxx = 0;
	    for(int i = 0;i<n;i++){
	        
	        cin >> R[i];
	        if(R[i] > maxx){
	            maxx = R[i];
	        }
	    }
	    
	    cout << maxOccured(L, R, n, maxx) << endl;
	}
	
	return 0;
}  // } Driver Code Ends
