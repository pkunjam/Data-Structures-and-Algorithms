{
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main()
 {
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//Complete this function
bool isPrime(int n){
    
    if(n<=1){
        return false;
    }    
    
    for(int i=2; i<n; i++){
        
        if(n%i==0){
            return false;
        }
    }
    
    return true;
}

int exactly3Divisors(int N)
{
    int count=0;
    
    for(int i=1; i*i<=N; i++){
        
        if(isPrime(i)){
            count++;
        }
    }
    
    return count;
}
