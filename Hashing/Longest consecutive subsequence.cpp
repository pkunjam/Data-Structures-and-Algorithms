// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int n);
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  cout<<findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}// } Driver Code Ends
int findLongestConseqSubseq(int arr[], int n)
{
    unordered_set<int> s;
    
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    
    int count=0,curr=1;
    
    for(int i=0;i<n;i++)
    {
        if(s.find(arr[i]-1)==s.end())
        {
            while(s.find(arr[i]+curr)!=s.end())
            {
                curr++;
            }
            count=max(curr,count);
            curr=1;
        }
    }
    return count;
}
