// { Driver Code Starts
//Initial Template for C++

// CPP code to find largest and 
// second largest element in the array

#include <bits/stdc++.h>
using namespace std;

void largestAndSecondLargest(int, int[]);


 // } Driver Code Ends
     

/* Function to find largest and second largest element
*sizeOfArray : number of elements in the array
* arr = input array
*/
void largestAndSecondLargest(int sizeOfArray, int arr[]){
    
    int max; 
    int max2;
    int n = sizeOfArray;
    
    sort(arr, arr + n);
    max = arr[n-1];
    
    for(int i=n-1; i>=0; i--){

        if(arr[n-1] != arr[i-1]){
            max2 = arr[i-1];
            break;
        }
    }
    
    if(arr[0] == arr[n-1]){
        max2 = -1;
    }
    
    cout << max << " " << max2 << endl;
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
	    
	    largestAndSecondLargest(sizeOfArray, arr);
	}
	
	return 0;
}  // } Driver Code Ends
