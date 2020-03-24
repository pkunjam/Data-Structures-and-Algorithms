// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


 // } Driver Code Ends
// Function to find element in sorted array
// arr: input array
// n: size of array
// x: element to be searched
int searchInSorted(int arr[], int n, int x) 
{ 

   int l=0;
   int h=n-1;
   
   for(int i=l; i<=h; i++)
   {
       int mid = (l+h)/2;
       
       if(arr[mid] == x)
       {
           return 1;
       }
       
       else if(arr[mid] > x)
       {
           h = mid-1;
       }
       
       else 
       {
           l = mid+1;
       }
   }
   
   return -1;
}

// { Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 
  // } Driver Code Ends
