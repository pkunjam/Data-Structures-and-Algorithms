// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findMinOpeartion(int matrix[][100], int n);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mat[n][100];
        for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>mat[i][j];
        cout << findMinOpeartion(mat, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
//Complete this function

// Function to find minimum number of operation
int findMinOpeartion(int matrix[][100], int n)
{
    int sum=0,row_sum,col_sum;
    int max=0;

    for(int i=0;i<n;i++)
    {
        row_sum=0;
        col_sum=0;
        
        for(int j=0;j<n;j++)
        {
            sum+=matrix[i][j];
            row_sum+=matrix[i][j];
            col_sum+=matrix[j][i];
        }
        
        if(row_sum>max)
        {
            max=row_sum;
        }
        
        if(col_sum>max)
        {
            max=col_sum;
        }
    }
    
    return (n*max)-sum;
}

