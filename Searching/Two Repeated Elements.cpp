// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to find the two repeated element
// arr: input array
// n: size of array
void twoRepeated(int arr[], int n){

    for(int i=0; i<n+2; i++)
    {
        if(arr[abs(arr[i])-1] >0)
        {
            arr[abs(arr[i])-1] = -1*arr[abs(arr[i])-1];
        }
        
        else
        {
            cout<<abs(arr[i])<<" ";
        }
    }
    
}

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        twoRepeated(a, n);
        cout<<endl;
    }
    return 0;
}
  // } Driver Code Ends
