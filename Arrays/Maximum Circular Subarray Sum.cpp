    // { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to find circular subarray with maximum sum
// arr: input array
// num: size of array

int maxSubarraySum(int arr[], int n){
    
    int max_sum = arr[0];
    int curr = arr[0];
    
    for(int i=1; i<n; i++)
    {
        curr = max(curr+arr[i], arr[i]);
        max_sum = max(curr, max_sum);
    }
    return max_sum;
}

int minSubarraySum(int arr[], int n){
    
    int min_sum = arr[0];
    int curr = arr[0];
    
    for(int i=1; i<n; i++)
    {
        curr = min(curr+arr[i], arr[i]);
        min_sum = min(curr, min_sum);
    }
    return min_sum;
}

int circularSubarraySum(int arr[], int n){
    
    int normalMaxSum = maxSubarraySum(arr, n);
    
    if(normalMaxSum < 0)
    {
        return normalMaxSum;
    }
    
    int arr_sum=0;
    
    for(int i=0; i<n; i++)
    {
        arr_sum += arr[i];
    }
    
    int maxCircularSubarraySum = arr_sum - minSubarraySum(arr,n);
    
    return max(normalMaxSum, maxCircularSubarraySum);
}

// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num;
	    cin>>num;
	    int arr[num];
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	    
	    
	    cout << circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
