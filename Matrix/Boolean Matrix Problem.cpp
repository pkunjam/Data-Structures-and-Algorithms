// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

#define SIZE 1000

void booleanMatrix(int r, int c, int a[SIZE][SIZE]);

int main() {
	
	int t;
    cin >> t;
    
    while(t--){
        int r,c;
    
        cin >> r >> c; //input the number of rows and columns
        
        int a[SIZE][SIZE]; 
        
        for(int i =0;i<r;i++){
            for(int j =0;j<c;j++){
                cin >> a[i][j]; //input the matrix
            }
        }
        
        booleanMatrix(r, c, a);
            
    }
	
	return 0;
}// } Driver Code Ends
//Complete this function
void booleanMatrix(int r, int c, int a[SIZE][SIZE])
{
    int row[r],col[c];
    
    for(int i=0;i<r;i++)
    {
        row[i]=0;
    }
    
    for(int i=0;i<c;i++)
    {
        col[i]=0;
    }
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]==1)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }
    
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(row[i]==1 || col[j]==1)
            {
                a[i][j]=1;
            }
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
  
