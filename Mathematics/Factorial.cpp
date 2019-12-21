{
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main()
{
    int T,N;
    cin>>T;  //input number of testcases
    while(T--)
    {
        cin>>N; //input n
        cout<<factorial(N)<<endl;
    }
    return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//Complete this function
long long factorial (int N)
{   
    if(N<=1)
    {
        return 1;
    }
    
    return N*factorial(N-1);    
    
}
