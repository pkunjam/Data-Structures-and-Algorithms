{
//Initial Template for C++
#include<bits/stdc++.h>
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
        cout<<digitsInFactorial(N)<<endl;
    }
    return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//You need to complete this function


int digitsInFactorial(int N)
{
    double digits = 0;
    
    if(N<=1){
        return 1;
    }
    
    for(int i=1; i<=N;i++){
        digits += log10(i);
    }
    
    return floor(digits)+1;
}
