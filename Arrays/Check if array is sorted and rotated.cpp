// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// arr: input array
// num: length of array
// This function returns true or false
bool checkRotatedAndSorted(int arr[], int n){
    
    int z = arr[n-1];
    int y = arr[n-2];
    
    //Ascending
    if(arr[n-1] > arr[n-2])
    {
        sort(arr, arr+n);
        
        if(arr[n-1] == z && arr[n-2] == y)
        {
            return false;
        }
        
        for(int i=0; i<n; i++)
        {
            if(arr[i] == y && arr[i+1] == z)
            {
                return true;
            }
        }
        
    }
    
    //Descending
    else
    {
        sort(arr, arr+n, greater<int>());
        
        if(arr[n-1] == z && arr[n-2] == y)
        {
            return false;
        }
        
        for(int i=0; i<n; i++)
        {
            if(arr[i] == y && arr[i+1] == z)
            {
                return true;
            }
        }
        
    }
    
}

// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--){
	    int num;
        cin>>num;
        int arr[num];
        for(int i = 0; i<num; ++i)
            cin>>arr[i];
        
        bool flag = false;
        
        flag = checkRotatedAndSorted(arr, num);
        
        if(!flag){
            cout << "No"<<endl;
        }
        else
        cout << "Yes"<<endl;
    
	}
	
	return 0;
}  // } Driver Code Ends
