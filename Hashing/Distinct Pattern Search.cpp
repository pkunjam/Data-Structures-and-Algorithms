// { Driver Code Starts
// C++ program for Naive Pattern 
// Searching algorithm 
#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
/*  function to search for a pattern with distinct characters
*   pat: pattern(to be searched in txt) given in the input
*   txt: string given in the input
*/
bool search(string pat, string txt) 
{ 
	
	int n = txt.length();
    int m = pat.length();
    
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<=m;j++)
	    {
	        if(j==m) return true;
	        
	        if(txt[i+j]!=pat[j])
	        {
	            break;
	        }
	    }
	}
	
	return false;
	
} 

// { Driver Code Starts.

// Driver Code 
int main() 
{ 
	
	int t;
	cin >> t;
	
	while(t--){
	    string s, p;
	    cin >> s >> p;
	    if(search(p, s)) cout << "Yes"; else cout << "No"; cout << endl;
	}
	
	return 0; 
}  // } Driver Code Ends
