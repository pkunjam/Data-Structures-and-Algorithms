// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
   

// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int arr[], int n){

    int tot = 0;
    int lmax[n], rmax[n];
    
    lmax[0]=arr[0];
    for(int i=1; i<n; i++)
    {
        lmax[i]=max(arr[i],lmax[i-1]);
    }
    
    rmax[n-1]=arr[n-1];
    for(int i=n-2; i>=0; i--)
    {
        rmax[i]=max(arr[i],rmax[i+1]);
    }
    
    for(int i=1; i<n-1; i++)
    {
        tot = tot + (min(lmax[i],rmax[i]) - arr[i]);
    }
    
    return tot;
}

// { Driver Code Starts.

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        
        cin >> n;
        
        int a[n];
        
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        cout << trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends
