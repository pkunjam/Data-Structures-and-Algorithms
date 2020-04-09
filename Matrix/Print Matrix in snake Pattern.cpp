// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*  Function to print the matrix in snake pattern
*   mat[][]: input matrix
*   n: size of matrix n x n
*/
void print(int mat[][100],int n)
{
    
    int i=0;
    
    while(i<n)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        
        i++;
        
        if(i>=n)
        {
            break;
        }
        
        for(int j=n-1;j>=0;j--)
        {
            cout<<mat[i][j]<<" ";
        }
        
        i++;
    }
    
    
}


// { Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    print(a,n);
    cout<<endl;
    }
    return 0;
}
  // } Driver Code Ends
