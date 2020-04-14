// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

bool areRotations(string, string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        cout<<areRotations(s1,s2)<<endl;

    }
    return 0;
}
// } Driver Code Ends
/*  Function to check if two strings are rotations of each other
*   s1, s2: are the input strings
*/
bool areRotations(string s1,string s2)
{
    if(s1.length()!=s2.length()) return false;
    
    s1+=s1;
    
    return (s1.find(s2)!=string::npos);
}
