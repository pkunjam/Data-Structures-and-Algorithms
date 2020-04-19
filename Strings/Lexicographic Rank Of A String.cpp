// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

int fact(int n){
    
    if(n==0) return 1;
    
    return n*fact(n-1);
}

int findRank(string s) 
{
    unordered_map<char,int> m;
    int rank=0;
    int n=s.length();
    
    for(int i=0;i<n;i++)
    {
        m[s[i]]++;
    }
    
    for(int i=0;i<n;i++)
    {
        int count=0;
        
        for(int j=i+1;j<n;j++)
        {
            if(m[s[j]]>1) return 0;
            
            if(s[j]<s[i]) count++;
        }
        
        rank+=count*fact(n-i-1);
    }
    
    return (rank+1)%1000000007;
}

// { Driver Code Starts.


int main()
{
    string S;
    int t;
    cin>>t;
    while(t--)
    {
     
        cin>>S;
    cout<<findRank(S)<<endl;
    }
}
  // } Driver Code Ends
