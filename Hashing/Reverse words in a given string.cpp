// { Driver Code Starts
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

void reverseWords(char*);

/* Driver function to test above functions */
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[10000];
        cin >> s;
        reverseWords(s);
        cout<<endl;
    }
}// } Driver Code Ends
/*Function to reverse words*/
void reverseWords(char *s) {
    
    string res="";
    int j=0;
    int n=strlen(s);
    
    for(int i=n-1;i>=0;i--)
    {
        
        if(i==0)
        {
            j=i;
            
            while(j<n)
            {
                if(s[j]=='.')
                {
                    break;
                }
                res+=s[j];
                j++;
            }
        }
        
        
        if(s[i]=='.')
        {
            j=i+1;
            
            while(true)
            {
                if(j==n)
                {
                    res+='.';
                    break;
                }
                
                if(s[j]=='.')
                {
                    res+=s[j];
                    break;    
                }
                res+=s[j];
                j++;
            }
        }
        
    }
    
    for(int i=0;i<res.length();i++)
    {
        cout<<res[i];
    }
}
