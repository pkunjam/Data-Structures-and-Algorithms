// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

bool sortbyfirst(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.first < b.first); 
}


int findPlatform(int arr[], int dep[], int n)
{
    int res=1;
    int p=1;
    
    int i=1;
    int j=0;
    
    sort(arr,arr+n);
    sort(dep,dep+n);
    
    
    while(i<n && j<n)
    {
        if(arr[i]<=dep[j])
        {
            p++;
            i++;
            
            if(p>res)
            {
                res=p;
            }
        }
        
        else
        {
            p--;
            j++;
        }
    }
    
    return res;
}


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
           for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
    cout <<findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends
