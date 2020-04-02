// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to find inversion count in the array
// A[]: input array
// N: size of the array


long long CountAndMerge(long long a[], long long l, long long m, long long r)
{
    long long n1=m-l+1, n2=r-m;
    long long left[n1], right[n2];
    
    
    for(int i=0; i<n1; i++)
    {
        left[i] = a[l+i];
    }
    
    for(int i=0; i<n2; i++)
    {
        right[i] = a[m+i+1];
    }
    
    long long res=0, i=0, j=0, k=l;
    
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            a[k] = left[i];
            i++;
        }
        
        else
        {
            a[k] = right[j];
            j++;
            
            res += (n1-i);
        }
        
        k++;
    }
    
    while(i<n1)
    {
        a[k++]=left[i++];
    }
    
    while(j<n2)
    {
        a[k++]=right[j++];
    }
    
    return res;
}

long long Inv(long long a[], long long l, long long r)
{
    long long res=0;
    
    if(l<r)
    {
        long long mid = l+(r-l)/2;
        
        res += Inv(a, l, mid);
        res += Inv(a, mid+1, r);
        
        res += CountAndMerge(a, l, mid, r);
    }
    
    return res;
}

long long int inversionCount(long long a[],long long n)
{
    long long l=0, r=n;
    
    return Inv(a, l, r);
}


// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        
        cout << inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends
