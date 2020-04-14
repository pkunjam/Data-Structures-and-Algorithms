// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(char*);

int main()
{
   
    char str[100];
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%s",str);
    cout<< getMaxOccuringChar(str)<<endl;
    }
}// } Driver Code Ends
// Function to get maximum occuring 
// character in given string str
char getMaxOccuringChar(char* s)
{
    unordered_map<int,int> m;
    int count[strlen(s)];
    int res=0;
    
    for(int i=0;i<strlen(s);i++)
    {
        count[i]=s[i];
        m[count[i]]++;
        
        res=max(res,m[count[i]]);
    }
    
    int c=1000;
    for(int i=0;i<strlen(s);i++)
    {
        if(m[count[i]]==res)
        {
            c=min(c,count[i]);
        }
    }
    return char(c);
}
