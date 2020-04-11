#include <bits/stdc++.h>
using namespace std;

int Union(int a[], int b[], int n, int m){
    
    unordered_set<int> s;
    
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    
    for(int j=0;j<m;j++)
    {
        s.insert(b[j]);
    }
    
    return s.size();
}

int main() {
	
	int t;
	
	cin>>t;
	
	while(t--)
	{
	    int n,m;
	    
	    cin>>n>>m;
	    
	    int a[n],b[m];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    for(int i=0;i<m;i++)
	    {
	        cin>>b[i];
	    }
	    
	    cout<<Union(a,b,n,m)<<endl;
	}
	
	return 0;
}
