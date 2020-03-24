// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Functio to find first smallest positive
// missing number in the array
int missingNumber(int arr[], int n) { 
    
    // Your code here
    int i,j;
    int small_pos=0;
    sort(arr,arr+n);
    
    for(i=0; i<n; i++)
    {
        if(arr[i]>0){
            break;
        }
    }
    
    for(j=i;j<n;j++)
    {
        if(arr[j]==arr[j-1] || arr[j]==small_pos+1){
            small_pos=arr[j];
        }
        
        else{
            return small_pos+1;
        }
    }
    return arr[n-1]+1;
} 

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        cout<<missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends
