// { Driver Code Starts
//Initial Template for C++


#include<iostream> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

//Complete this function
int maxEvenOdd(int arr[], int n) 
{ 
   int max_len = 1;
   int curr = 1;
   
   for(int i=1; i<n; i++)
   {
       if((arr[i]%2 == 0 && arr[i-1]%2 != 0) || (arr[i]%2 != 0 && arr[i-1]%2 == 0))
       {
           curr++;
           max_len = max(curr, max_len);
       }
       
       else
       {
           curr=1;
       }
   }
   
   return max_len;
} 

// { Driver Code Starts.



/* Driver program to test maxSubArraySum */
int main() 
{ 
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        
        for(int i=0;i<sizeOfArray;i++)
        {
            cin>>arr[i];
        }
        cout  << maxEvenOdd(arr, sizeOfArray)<<endl; 
    }
   return 0; 
} 
  // } Driver Code Ends
