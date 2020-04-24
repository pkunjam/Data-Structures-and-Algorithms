// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to print string after removing consecutive duplicates


string removeConsecutiveDuplicates(string str)
{
    stack<char> s;
    string res="";
    
    s.push(str[str.size()-1]);
    
    for(int i=str.size()-1;i>=0;i--)
    {
        if(s.top()!=str[i])
        {
            s.push(str[i]);
        }
    }
    
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
        cout<<removeConsecutiveDuplicates(s)<<endl;
    }
    
	return 0;
}  // } Driver Code Ends
