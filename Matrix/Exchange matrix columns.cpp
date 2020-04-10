// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

#define SIZE 100


 // } Driver Code Ends
/*  Function to exchange columns
*   n1, m1: rows and cols of matrix
*   SIZE: defined globally for matrix
*   arr1[][]: input matrix
*/
void exchangeColumns(int n, int m, int arr[SIZE][SIZE]){
    
    for(int i=0;i<n;i++)
    {
        swap(arr[i][0],arr[i][m-1]);
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    
}

// { Driver Code Starts.

int main() {
    long long t;
    cin>>t;
    while(t--)
    {
        int n1,m1;
        cin>>n1>>m1;
        int arr1[SIZE][SIZE];
        for(int i=0;i<n1;i++)
        for(int j=0;j<m1;j++)
        cin>>arr1[i][j];
        
        exchangeColumns(n1, m1, arr1);
        cout<<endl;
    }
    
	return 0;
}  // } Driver Code Ends
