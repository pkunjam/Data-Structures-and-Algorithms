// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

void segragate012(int A[], int N);

int main() {

    int T;
    cin >> T;

    while(T--){
        int N;
        cin >>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin >> A[i];
        }

        segragate012(A, N);

        for(int i=0;i<N;i++){
            cout << A[i]  << " ";
        }

        cout << endl;
        
        
    }

}
// } Driver Code Ends

// Function to segregate 0s, 1s and 2s
// A[]: input array
// N: size of array
void segragate012(int arr[], int n)
{
    int l=0, mid=0, h=n-1;
    
    while(mid<=h)
    {
        if(arr[mid]==0)
        {
            swap(arr[l],arr[mid]);
            l++;
            mid++;
        }
        
        else if(arr[mid]==2)
        {
            swap(arr[h],arr[mid]);
            h--;
        }
        
        else
        {
            mid++;
        }
    }
}
