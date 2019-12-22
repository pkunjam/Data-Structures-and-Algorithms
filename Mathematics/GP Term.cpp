{
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main()
{
    int T; //testcases total
    cin>>T;//input the testcases
    for(int i=0;i<T;i++) //white testcases are not exhausted
    {
        int A,B;
        cin>>A>>B; //input first and second term of gp
        int N;
        cin>>N; //input n
        
        cout<<floor(termOfGP(A,B,N))<<endl;
    }
    return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//Complete this function
double termOfGP(int A,int B,int N)
{
    return floor(A*(pow(((double)B/(double)A),N-1)));
}
