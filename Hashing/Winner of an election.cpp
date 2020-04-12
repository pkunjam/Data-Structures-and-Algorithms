// { Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;

void winner(string arr[],int n);


int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        
        winner(arr,n);
        
        cout<<endl;
        
        
    }
    return 0;
}
// } Driver Code Ends
// Funtion to find winner
// arr[]: input array
// n: size of array
void winner(string arr[],int n)
{
    unordered_map<string,int> m;
    
    int max=1;
    string name=arr[0];
    
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    
    for(int i=0;i<n;i++)
    {
        if(m[arr[i]]>max)
        {
            max=m[arr[i]];
            name=arr[i];
        }
        
        if(m[arr[i]]==max)
        {
            if(arr[i]<name)
            {
                name=arr[i];
            }
        }
    }
    
    cout<<name<<" "<<max;
}
