// { Driver Code Starts
//Initial Template for C++

// C++ program for implementation of KMP pattern searching 
// algorithm 
#include <bits/stdc++.h> 

using namespace std;


 // } Driver Code Ends
//User function Template for C++

// Fills lps[] for given patttern pat[0..M-1] 
void computeLPSArray(string pat, int m, int* lps) 
{ 
	int j=0,i=1;
	lps[0]=0;
	
	while(i<m)
	{
	    if(j==0)
	    {
	        if(pat[j]==pat[i])
	        {
	            lps[i]=j+1;
	            i++;
	            j++;
	            continue;
	        }
	        
	        else
	        {
	            lps[i]=0;
	            i++;
	            continue;
	        }
	    }
	    
	    if(pat[j]==pat[i])
	    {
	        lps[i]=j+1;
	        i++;
	        j++;
	    }
	    
	    else
	    {
	        j=lps[j-1];
	    }
	}
} 

// Returns true if pat found in txt
bool KMPSearch(string pat, string txt) {
    
    int n=txt.length();
    int m=pat.length();
    
    int lps[m];
    
    computeLPSArray(pat,m,lps);
    
    int i=0,j=0;
    
    while(i<n && j<m)
    {
        if(j==0)
        {
            if(pat[j]==txt[i])
            {
                i++;
                j++;
                continue;
            }
            
            else
            {
                i++;
                continue;
            }
        }
        
        if(pat[j]==txt[i])
        {
            i++;
            j++;
        }
        
        else
        {
            j=lps[j-1];
        }
    }
    
    if(j==m) return true;
    
    else return false;
}

// { Driver Code Starts.

// Driver program to test above function 
int main() 
{ 
    int t;
    std::cin >> t;
    
    while(t--){
        string s, pat;
        cin >> s >> pat;
        if(KMPSearch(pat, s)){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
    
	return 0;
} 
  // } Driver Code Ends
