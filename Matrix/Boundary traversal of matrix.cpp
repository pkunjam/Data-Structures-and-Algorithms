// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define SIZE 50


 // } Driver Code Ends
/*  Function to print boundary traversal of the matrix
*   n1, m1: rows and cols of matrix
*   arr[][]: input matrix
*/
void boundaryTraversal(int n1, int m1, int arr[SIZE][SIZE]){
    
    if(n1==1)
    {
        for(int i=0;i<m1;i++)
        {
            cout<<arr[0][i]<<" ";
        }
    }
    
    else if(m1==1)
    {
        for(int i=0;i<n1;i++)
        {
            cout<<arr[i][0]<<" ";
        }
    }
    
    else
    {
        for(int i=0;i<m1;i++)
        {
            cout<<arr[0][i]<<" ";
        }
        
        for(int i=1;i<n1;i++)
        {
            cout<<arr[i][m1-1]<<" ";
        }
        
        for(int i=m1-2;i>=0;i--)
        {
            cout<<arr[n1-1][i]<<" ";
        }
        
        for(int i=n1-2;i>=1;i--)
        {
            cout<<arr[i][0]<<" ";
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
        
        boundaryTraversal(n1, m1, arr1);
        
        cout <<endl;
    }
    
	return 0;
}  // } Driver Code Ends
