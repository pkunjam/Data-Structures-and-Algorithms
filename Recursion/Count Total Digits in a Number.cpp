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
	    int n;
	    cin>>n;
	    
	    cout<<countDigits(n)<<endl;
	    
	    
	}
	return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//Complete this function
int countDigits(int n)
{
    if(n<10) return 1;
    
    return 1 + countDigits(n/10);
}
