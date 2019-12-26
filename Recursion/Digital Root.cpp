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
	    
	    cout<<digitalRoot(n)<<endl;
	    
	    
	}
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//Complete this function

int sumOfDigits(int n){
    
    if(n==0) return 0;
    
    return n%10 + sumOfDigits(n/10);
}

int digitalRoot(int n)
{
    int d_root = sumOfDigits(n);
    
    if(d_root < 10){
        return d_root;
    }
    
    else{
        return digitalRoot(d_root);
    }
}
