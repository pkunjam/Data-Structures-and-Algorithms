// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

string caseSort(string str, int n){
    
    string up,low;
    string res;
    
    for(int i=0;i<n;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            up+=str[i];
        }
        
        else
        {
            low+=str[i];
        }
    }
    
    sort(up.begin(),up.end());
    sort(low.begin(),low.end());
    
    int j=0,k=0;
    
    for(int i=0;i<n;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            res+=up[j++];
        }
        
        else
        {
            
            res+=low[k++];
        }
    }
    
    return res;
}

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		
		cout<<caseSort (str, n)<<endl;
	}
}  // } Driver Code Ends
