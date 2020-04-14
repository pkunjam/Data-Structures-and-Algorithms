// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

char nonrepeatingCharacter(string S);

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    
        char ans = nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
// Complete this function
char nonrepeatingCharacter(string s)
{
   if(s.length()==1) return s[0];
   
   unordered_map<int,int> m;
   int count[s.length()];
   
   for(int i=0;i<s.length();i++)
   {
       count[i]=s[i];
       m[count[i]]++;
   }
   
   for(int i=0;i<s.length();i++)
   {
       if(m[count[i]]==1)
       {
           return s[i];
       }
   }
   return '$';
}
