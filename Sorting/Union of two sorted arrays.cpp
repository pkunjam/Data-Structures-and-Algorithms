// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//arr1,arr2 : the arrays
// n, m: size of arrays
void findUnion(int a[], int b[], int n, int m)
{
    
    int i=0, j=0;
    int c[m+n];
    
    while(i<n || j<m)
    {
        if(i<n)
        {
            c[i] = a[i];
            i++;
        }
        
        if(j<m)
        {
            c[n+j] = b[j];
            j++;
        }
    }
    
    sort(c, c+m+n);
    
    int k=0;
    
    while(k<m+n)
    {
        if(k>0 && c[k] == c[k-1])
        {
            k++;
            continue;
        }
        
        else
        {
            cout<<c[k]<<" ";
            k++;
        }
    }
}

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    
	    findUnion(arr1,arr2, N, M);
	    
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
