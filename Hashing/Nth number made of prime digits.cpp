#include <bits/stdc++.h>
using namespace std;

int Nth(int n){
    
    int num=2;
    int count=0;
    
    unordered_set<char> m={'2','3','5','7'};
    
    while(count<n)
    {
        string str = to_string(num);
        
        for(int i=0;i<str.length();i++)
        {
            if(m.find(str[i])==m.end())
            {
                break;
            }
            
            if(i==str.length()-1)
            {
                count++;
            }
        }
        num++;
    }
    
    return num-1;
}

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    
	    cin>>n;
	    
	    cout<<Nth(n)<<endl;
	}
	return 0;
}
