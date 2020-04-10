// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define SIZE 801

int search( int n,int m, int x, int[SIZE][SIZE]);

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n,m,x,i,j;
    cin>>n>>m;
    
    int mat[SIZE][SIZE];
    
    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
          mat[i][j] = 0;
        cin>>mat[i][j];
      }
    }
    
    cin>>x;
    cout << search(n,m,x, mat) << endl;
  
  }
  return 0;
}
// } Driver Code Ends
/*  Function to search x in the input matrix
*   n, m: rows and columns of matrix
*   x: element to check presence in matrix
*   mat[][]: input matrix
*/
int search( int n,int m, int x, int mat[SIZE][SIZE])
{
   
   int i=0,j=m-1;
   
   while(i<n && j>=0)
   {
       int res=mat[i][j];
       
       if(res==x)
       {
           return 1;
       }
       
       else if(res<x)
       {
           i++;
       }
       
       else
       {
           j--;
       }
   }
   
   return 0;
}
