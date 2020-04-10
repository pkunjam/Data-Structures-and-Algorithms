// { Driver Code Starts
#include <iostream>
using namespace std;

#define SIZE 30

void spirallyTraverse(int m, int n, int ar[SIZE][SIZE]);

int main() {
	int T = 0;
	
	scanf("%d",&T);
	
	while(T--)
	{
        int m,n;
        scanf("%d",&m);
        scanf("%d",&n);
	    int ar[SIZE][SIZE] = {{0}};
	    int i = 0;
	    int j = 0;
	    int row = 0;
	    int col = 0;
	    
	    for(i=0; i<m; i++)
	    {
	        for(j=0; j<n; j++)
	        {
	            scanf("%d",&ar[i][j]);
	        }
	    }
	    
	    spirallyTraverse(m, n, ar);
	    cout<<endl;
	   
	}
	return 0;
}// } Driver Code Ends
//Complete this function
void spirallyTraverse(int m, int n, int arr[SIZE][SIZE]){
    
    int top=0,left=0,right=n-1,bottom=m-1;
    
    while(top<=bottom && left<=right)
    {
        for(int i=left;i<=right;i++)
        {
            cout<<arr[top][i]<<" ";
        }
        
        top++;
        
        for(int i=top;i<=bottom;i++)
        {
            cout<<arr[i][right]<<" ";
        }
        
        right--;
        
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            {
                cout<<arr[bottom][i]<<" ";
            }
            
            bottom--;
        }
        
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            {
                cout<<arr[i][left]<<" ";
            }
        
            left++;        
        }
        
    }
    
}
