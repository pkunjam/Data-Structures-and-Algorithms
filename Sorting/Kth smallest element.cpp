#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    int res;

    while(t--)
    {

        int n;
        cin>>n;

        int arr[n];

        for(int i=0;i<n;++i)
            cin>>arr[i];

        int k;
        cin>>k;
        
        sort(arr,arr+n);
        
        cout<<arr[k-1]<<endl;
    }
    return 0;
}
