#include <bits/stdc++.h>
using namespace std;

bool sortbycount(const pair<int,int>&a, const pair<int,int>&b){
    
    if(a.second==b.second){
        return (a.first<b.first);
    }
    
    return (a.second > b.second);
}

void frequency(int arr[], int n){
    
    unordered_map<int,int> m;
    vector<pair<int,int>> v;
    
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    
    for(int i=0;i<n;i++)
    {
        v.push_back(make_pair(arr[i],m[arr[i]]));
        m.erase(arr[i]);
    }
    
    sort(v.begin(),v.end(),sortbycount);
    m.clear();
    
    for(int i=0;i<v.size();i++)
    {
        while(v[i].second!=0)
        {
            cout<<v[i].first<<" ";
            v[i].second--;
        }
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
	    
	    frequency(arr,n);
	    
	    cout<<endl;
	}
	
	return 0;
}
