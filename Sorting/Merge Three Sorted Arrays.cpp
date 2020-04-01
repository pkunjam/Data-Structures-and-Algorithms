// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

typedef vector<int> Vector;

void printVector(const Vector& a) 
{ 
    for (auto e : a) { 
        cout << e << " "; 
    }
    cout<<endl;
} 

 // } Driver Code Ends
// Function to merge three sorted arrays
// A, B, and C: input sorted arrays

Vector mergeTwo(Vector& X, Vector& Y)
{
    int i=0, j=0;
    
    vector<int> Z;
    
    while(i<X.size() && j<Y.size())
    {
        if(X[i] < Y[j])
        {
            Z.push_back(X[i++]);
        }
        
        else
        {
            Z.push_back(Y[j++]);
        }
    }
    
    while(i<X.size())
    {
        Z.push_back(X[i++]);
    }
    
    while(j<Y.size())
    {
        Z.push_back(Y[j++]);
    }
    
    return Z;
}

Vector mergeThree(Vector& A, Vector& B, Vector& C) 
{ 
    vector<int> a = mergeTwo(A, B);
    vector<int> res = mergeTwo(a,C);
    
    return res;
} 


// { Driver Code Starts.

int main() 
{ 


    int t;
    cin>>t;
    while(t--){
    int n,m,o;
    cin>>n>>m>>o;
    Vector A,B,C;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        B.push_back(x);
    }
    
    for(int i=0;i<o;i++){
        int x;
        cin>>x;
        C.push_back(x);
    }

  
    printVector(mergeThree(A, B, C)); 
    
    }
   
    return 0; 
} 
  // } Driver Code Ends
