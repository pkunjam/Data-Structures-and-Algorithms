// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int median(int A[],int N)
{
    
    sort(A,A+N);
    
    //your code here
    //If median is in fraction then convert it to integer and return
    if(N%2 != 0){
        return floor(A[N/2]);
    }
    
    else{
        return floor(float((A[N/2] + A[(N/2)-1])/2));
    }
    
}

int mean(int A[],int N)
{
    int m=0;
    
    for(int i=0; i<N; i++)
    {
        m += A[i];
    }
    return (m/N);
}


// { Driver Code Starts.

int main()
{
    //testcase
    int T;
    cin>>T;
   
    //looping testcase
    while(T--)
    {
        //number of elements in array
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        cout<<mean(a,N)<<" "<<median(a,N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
