#include <bits/stdc++.h>
using namespace std;

void Pair(int arr[], int n){
    
    unordered_map<int,int> m;
    vector<int> v;
    
    for(int i=0;i<n;i++)
    {
        m[abs(arr[i])]++;
    }
    
    for(int i=0;i<n;i++)
    {
        if(m[arr[i]]==2)
        {
            v.push_back(arr[i]);
        }
    }
    
    sort(v.begin(),v.end());
    
    if(v.empty())
    {
        cout<<0;
        return;
    }
    
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<-v[i]<<" ";
    }
}

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	
	    int arr[n];
	
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    Pair(arr,n);
	    cout<<endl;
	}
	return 0;
}
