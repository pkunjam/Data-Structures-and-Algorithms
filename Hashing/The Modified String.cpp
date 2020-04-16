// { Driver Code Starts
#include<bits/stdc++.h>
#define br char xx; cin>>xx; cout<<xx<<endl;
#define lli long long int
using namespace std;


 // } Driver Code Ends

int modified (string a){
    
    int count=0;
    
    for(int i=0;i<a.length()-2;i++)
    {
        if(a[i]==a[i+1] && a[i]==a[i+2])
        {
            count++;
            i++;
        }
    }
    return count;
}

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    string a;
    while(t--){
        cin>>a;
        cout<<modified(a)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
