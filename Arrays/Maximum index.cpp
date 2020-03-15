// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to find the maximum difference of j-i
// arr[]: input array
// n: size of array
int maxIndexDiff(int arr[], int n) 
{ 
    int maxDiff=0;
    
    for(int i=0; i<n; i++)
    {
        for(int j=n-1; j>i; j--)
        {
            if(arr[i]<=arr[j] && maxDiff<(j-i))
            {
                maxDiff = j-i;
            }
        }
    }
    return maxDiff;
}

// { Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    cin>>T;
    while(T--){
        int num;
        cin>>num;
        int arr[num];
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        
        if(num ==1 ){
            cout<<0<<endl;
            continue;
        }
        cout<<maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
}   // } Driver Code Ends
