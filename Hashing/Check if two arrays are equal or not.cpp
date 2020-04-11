#include <bits/stdc++.h>
using namespace std;

int Equal(long long a[], long long b[], int n){
    
    unordered_map<int,int> m;
    
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    
    for(int i=0;i<n;i++)
    {
        m[b[i]]--;
        
        if(m[b[i]]<1)
        {
            m.erase(b[i]);
        }
        
    }
    return m.empty();
}

int main() {
	
	int t;
	
	cin>>t;
	
	while(t--)
	{
	    int n;
	    
	    cin>>n;
	    
	    long long a[n],b[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    
	    cout<<Equal(a,b,n)<<endl;
	}
	
	return 0;
}
