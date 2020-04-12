#include <bits/stdc++.h>
using namespace std;

void Sorting(int a[], int b[], int n, int m){
    
    unordered_map<int,int> mp;
    
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    
    sort(a,a+n);
    
    for(int j=0;j<m;j++)
    {
        while(mp.find(b[j])!=mp.end() && mp[b[j]]!=0)
        {
            cout<<b[j]<<" ";
            mp[b[j]]--;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        while(mp.find(a[i])!=mp.end() && mp[a[i]]!=0)
        {
            cout<<a[i]<<" ";
            mp[a[i]]--;
        }
    }
}

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,m;
	    cin>>n;
	    cin>>m;
	    
	    int a[n],b[m];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    for(int i=0;i<m;i++)
	    {
	        cin>>b[i];
	    }
	    
	    Sorting(a,b,n,m);
	    
	    cout<<endl;
	}
	return 0;
}
