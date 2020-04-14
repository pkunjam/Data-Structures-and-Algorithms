// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

bool isIsogram(string s);

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        
        cout<<isIsogram(s)<<endl;
        
    }
	return 0;
}// } Driver Code Ends
//Complete this function
bool isIsogram(string s)
{
    if(s.length()==1)
    {
        return 1;
    }
    
    unordered_map<int,int> m;
    
    int temp[s.length()];
    
    for(int i=0;i<s.length();i++)
    {
        temp[i]=s[i];
        m[temp[i]]++;
    }
    
    for(auto x : m)
    {
        if(x.second>1)
        {
            return 0;
        }
    }
    return 1;
}
