{
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main() {
	int T;
	cin>>T;
	while (T--)
	{
	    int n;
	    cin>>n;
	    
	    cout<<fibonacci(n)<<endl;
	    
	    
	}
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//Complete this function
long long fibonacci(int n)
{
    if(n<=1) return n;
    
    return fibonacci(n-1) + fibonacci(n-2);
}

