// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends
/* The function should return position where the target string 
   matches the string str
Your are required to complete this method */
int strstr(string s, string x)
{
    int n=s.length();
    int m=x.length();
    
    for(int i=0;i<n;i++)
    {
        if(s[i]==x[0])
        {
            int k=i;
            
            for(int j=0;j<m;j++)
            {
                
                if(x[j]!=s[k])
                {
                    break;
                }
                
                if(j==m-1)
                {
                    return i;
                }
                k++;
            }
        }
    }
    return -1;
}
