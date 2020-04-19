// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*  Function to check if two strings are anagram
*   c, d: input string
*/
bool isAnagram(string c, string d){
    
    int n=c.length();
    int m=d.length();
    
    if(n!=m) 
    {
        return false;
    }
    
    int count[26]={0};
    
    for(int i=0;i<n;i++)
    {
        count[c[i]-97]++;
    }
    
    for(int i=0;i<n;i++)
    {
        count[d[i]-97]--;
    }
    
    for(int i=0;i<26;i++)
    {
        if(count[i]!=0)
        {
            return false;
        }
    }
    return true;
}


// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;

        if(isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends
