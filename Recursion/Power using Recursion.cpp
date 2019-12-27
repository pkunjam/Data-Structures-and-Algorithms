{
//Initial Template for C++
#include <iostream>
using namespace std;
//Position this line where user code will be pasted.
int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n,p;
	    cin>>n>>p;
	    cout<<RecursivePower(n,p)<<endl;
	}
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//Complete this function
int RecursivePower(int n,int p)
{
    if(p==1) return n;
    if(p==0) return 1;
    return n * RecursivePower(n, p-1);
}

