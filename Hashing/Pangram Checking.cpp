// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Returns true if the string is pangram else false
bool checkPangram (string &str)
{
    int count[256]={0};
    
    transform(str.begin(), str.end(), str.begin(), ::tolower); 
    
    for(int i=0;i<str.length();i++)
    {
        count[str[i]]++;
    }
    
    for(int i=97;i<=122;i++)
    {
        if(count[i]==0) return 0;
    }
    
    return 1;
}



// { Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string str;
        getline(cin, str);
        
        if (checkPangram(str) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}
  // } Driver Code Ends
