// { Driver Code Starts

// C++ implementation to find the character in first 
// string that is present at minimum index in second
// string
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
void printMinIndexChar(string str, string patt)
{
    unordered_set<char> m;
    
    for(int i=0;i<patt.length();i++)
    {
        m.insert(patt[i]);
    }
    
    for(int i=0;i<str.length();i++)
    {
        if(m.find(str[i])!=m.end())
        {
            cout<<str[i];
            return;
        }
    }
    
    cout<<"No character present";
}

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    string patt;
	    cin>>str;
	    cin>>patt;
	    printMinIndexChar(str, patt);
	    cout<<endl;
	}return 0;
}
  // } Driver Code Ends
