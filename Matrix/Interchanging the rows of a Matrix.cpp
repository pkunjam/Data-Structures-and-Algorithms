// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

#define SIZE 50

void interchangeRows(int n1, int m1, int arr1[SIZE][SIZE]);
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int n1,m1;
        cin>>n1>>m1;
        int arr1[SIZE][SIZE];
        for(int i=0;i<n1;i++)
        for(int j=0;j<m1;j++)
        cin>>arr1[i][j];
        
        interchangeRows(n1, m1, arr1);
        
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m1;j++)
            cout<<arr1[i][j]<<" ";
        }
        
        cout<<endl;
    }
    
	return 0;
}// } Driver Code Ends
//Complete this function
void interchangeRows(int n, int m, int arr[SIZE][SIZE])
{
    int top=0,bottom=n-1;
    
    while(top<=bottom)
    {
        for(int i=0;i<m;i++)
        {
            swap(arr[top][i],arr[bottom][i]);
        }
        top++;
        bottom--;
    }
}
