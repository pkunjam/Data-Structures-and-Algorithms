// { Driver Code Starts
// C++ program to find union of 
// two sorted arrays 
#include <bits/stdc++.h> 
using namespace std; 

void printIntersection(int arr1[], int arr2[], int N, int M);  
  
/* Driver program to test above function */
int main() 
{ 
    int T;
    cin >> T;
 
    while(T--){
        
        int N, M;
        cin >> N >> M;
        int arr1[N];
        int arr2[M];
        for(int i = 0;i<N;i++){
            cin >> arr1[i];
        }
        
        for(int i = 0;i<M;i++){
            cin >> arr2[i];
        }
        
        // Function calling 
        printIntersection(arr1, arr2, N, M); 
        
        cout << endl;
    }
    
  return 0; 
} 
// } Driver Code Ends
/* Function prints Intersection of arr1[] and arr2[] 
N is the number of elements in arr1[] 
M is the number of elements in arr2[] */
void printIntersection(int first[], int second[], int n, int m) 
{ 
    int i=0, j=0, flag=0;
    
    while(i<n && j<m)
    {
        if(i>0 && first[i-1] == first[i])
        {
            i++;
            continue;
        }
        
        if(first[i] < second[j])
        {
            i++;
        }
        
        else if(first[i] > second[j])
        {
            j++;
        }
        
        else
        {
            flag=1;
            cout<<first[i]<<" ";
            i++;
            j++;
        }
    }
    
    if(flag == 0)
    {
        cout<<-1;
    }
}
