{
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main()
{
    int T; //testcases
    cin>>T; //input testcases
    while(T--) //while testcase have not been exhausted
    {
        int N;
        cin>>N; //input n
        
        if(isPrime(N)) 
        cout<<"Yes";
        else
            cout<<"No";
            
        cout << endl;
    }
    return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//You need to complete this function
bool isPrime(int N)
{
    if(N<=1){
        return false;
    }
    
    else{
        
        for(int i=2; i<N; i++){
            
            if(N%i==0){
                return false;
            }
            
        }
        return true;
    }
    
}
