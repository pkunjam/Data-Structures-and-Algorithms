// { Driver Code Starts
// C++ program Find concatenated string with 
// uncommon characters of given strings 
#include <bits/stdc++.h> 
using namespace std; 

string concatenatedString(string, string);

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	string res = concatenatedString(s1, s2);
    	
    	if(res.length() >= 1) cout << res << endl;
    	else cout << "-1" << endl;
	
	}
	return 0; 
}
// } Driver Code Ends
// Function which concatenate two strings
// after removing common characters
string concatenatedString(string s1, string s2) 
{ 
    unordered_map<char,int> m;
    
    string str="";
    
    for(int i=0;i<s2.length();i++)
    {
        m[s2[i]]++;
    }
    
    for(int i=0;i<s1.length();i++)
    {
        if(m.find(s1[i])==m.end())
        {
            str+=s1[i];
        }
    }
    
    m.clear();

    for(int i=0;i<s1.length();i++)
    {
        m[s1[i]]++;
    }
    
    for(int i=0;i<s2.length();i++)
    {
        if(m.find(s2[i])==m.end())
        {
            str+=s2[i];
        }
    }
    return str;
}
