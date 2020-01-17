// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to reverse the array in groups
vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    
    for (int i=0; i<n; i+=k)
    {
        int l=i;
        int r;
        
        if(i+k-1 < n-1)
        {
            r = i+k-1;
        }
        else
        {
            r = n-1;
        } 
        
        while(l<r)
        {
            swap(mv[l],mv[r]);
            l++;
            r--;
        }
    }
    
    return mv;
}

// { Driver Code Starts.

int main() {
    
    int t; //Testcases
    cin >> t; //input the number of testcases

    while(t--){ //while testcases exist

        int n;
        cin >> n; //input the size of array
        
        vector<long long> mv; // Declaring a vector mv
        
        int k;
        cin >> k; //input k 

        for(long long i =0;i<n;i++){
            long long x;
            cin >> x; //input element of array

            mv.push_back(x); //push the element into vector
        }
        
        mv = reverseInGroups(mv, n, k);
        
        for(long long i =0;i<n;i++){
            cout << mv[i] << " "; //Just print the vector
        }

        cout << endl;
        
       

    }

}
  // } Driver Code Ends
