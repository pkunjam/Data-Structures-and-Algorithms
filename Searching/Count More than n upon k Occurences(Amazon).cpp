// { Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int countOccurence(int arr[], int n, int k);
// Position this line where user code will be pasted.

/* Driver program to test above function */
int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        cout << countOccurence(arr, n, k) << endl;
    }
    return 0;
}
// } Driver Code Ends
// Function to find element with count more than n/k times
// arr: input array
int countOccurence(int arr[], int n, int k) {
    
    int count=1,occur=0;
    
    sort(arr, arr+n);
 
    
    for(int i=1;i<=n;i++)
    {
        
        if(arr[i]==arr[i-1])
        {
            count++;
        }
        
        if(arr[i]!=arr[i-1] || arr[i]==arr[n])
        {
            if(count>n/k)
            {
                occur++;
            }
            count=1;
        }

    }
    
    return occur;
}
