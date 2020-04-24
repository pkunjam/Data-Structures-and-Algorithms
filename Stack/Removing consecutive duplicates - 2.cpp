// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return string after removing consecutive duplicates

// Function to remove pair of characters
string removePair(string str){
    
    stack<char> s;
    string res="";
    
    for(int i=str.size()-1;i>=0;i--)
    {
        if(s.empty() || s.top() != str[i])
        {
            s.push(str[i]);
        }
        
        else
        {
            s.pop();
        }
    }
    
    
    if(s.empty()) return "Empty String";
    
    while(s.empty()==false)
    {
        res+=s.top();
        s.pop();
    }
    
    return res;
}

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        
        string ans = removePair (s);
        
        if(ans=="")
            cout<<"Empty String"<<endl;
        else
            cout<<ans<<endl;
    }
    
	return 0;
}  // } Driver Code Ends
