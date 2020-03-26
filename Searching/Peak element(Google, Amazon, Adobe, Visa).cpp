// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
// Function to find element in sorted array
int leftIndex(int n, int arr[], int x){
    
    // for(int i=0; i<n; i++)
    // {
    //     if(arr[i] == x)
    //     {
    //         return i;
    //     }
    // }
    
    int l=0, h=n-1;
    
    while(l<=h)
    {
        int mid = (l+h)/2;
        
        if(arr[mid] == x && arr[mid-1] != x)
        {
            return mid;
        }
        
        else if(arr[mid] < x)
        {
            l = mid+1;
        }
        
        else 
        {
            h = mid-1;
        }
    
    }
    
    return -1;
}




// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    
	    int elemntToSearch;
	    cin >> elemntToSearch;
	    
	    cout << leftIndex(sizeOfArray, arr, elemntToSearch) << endl;
	}
	
	return 0;
}  // } Driver Code Ends
