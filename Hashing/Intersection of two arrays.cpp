#include<bits/stdc++.h>
using namespace std;


int Intersection(int a[], int b[], int n, int m){
    
    unordered_set<int> s;
    
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    
    for(int i=0;i<m;i++)
    {
        if(s.count(b[i])==1)
        {
            count++;
            s.erase(b[i]);
        }
    }
    
    return count;
}

int main() {
	
	int t;
	
	cin>>t;
	
	while(t--)
	{
	    int n;
	    int m;
	    
	    cin>>n;
	    cin>>m;
	    
	    int a[n];
	    int b[m];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    for(int i=0;i<m;i++)
	    {
	        cin>>b[i];
	    }
	    
	    cout<<Intersection(a,b,n,m)<<endl;
	    
	}
	
	return 0;
}


