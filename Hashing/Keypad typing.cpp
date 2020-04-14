#include <bits/stdc++.h>
using namespace std;

void Keypad(string s){
    
    unordered_map<int,int> m;
    
    int k=97;
    for(int i=2;i<=9;i++)
    {
        if(i==7 || i==9)
        {
            for(int j=0;j<4;j++)
            {
                m.insert({k++,i});
            }
        }
        
        else{
            
            for(int j=0;j<3;j++)
            {
                m.insert({k++,i});
            }
        }
        
    }
    
    for(int i=0;i<s.length();i++)
    {
        if(m.find(s[i])!=m.end())
        {
            cout<<m[s[i]];
        }
    }
}

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    Keypad(s);
	    
	    cout<<endl;
	}
	
	return 0;
}
