/ { Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to find the leaders in an array of size n

vector<int> leaders(int arr[], int n){
    
    vector<int> l;
    int curr_lead = arr[n-1];
    l.push_back(arr[n-1]);
    
    for(int i=n-2; i>=0; i--)
    {
        if(curr_lead <= arr[i])
        {
            curr_lead = arr[i];
            l.push_back(arr[i]);
            
        }
    }
    reverse(l.begin(),l.end()); 
    return l;
}

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;
   while (t--)
   {
       long long n;
       cin >> n;
        
        int a[n];
        
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        
        vector<int> v = leaders(a, n);
        
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends
