{
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main()
{
    int T;//number of testcases
    int C,F;
    cin >> T; //input number of testcases
    while(T--){
        cin >> C;//input temperature in celscius
        cout << floor(cToF(C)) << endl; //print the output
    }
    return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//You need to complete this function
double cToF(int C)
{
    //Your code here
    return (C*1.8)+32;
}
