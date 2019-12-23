{
//Initial Template for C++
#include<iostream>
using namespace std;
//Position this line where user code will be pasted.
int main()
{
	int T;
	cin>>T;
	while(T--){
		int a,m;
		cin>>a>>m;
		cout << modInverse(a, m)<<endl;
	}
    return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//Complete this function

bool GCD(int a,int m){
    
    int gcd;
        
    for(int i=1; i<=m; i++){
        
        if(a%i==0 && m%i==0){
            gcd = i;
        }
    }
    
    if(gcd==1){
        return true;
    }
    
    else{
        return false;
    }
     
}

int modInverse(int a, int m)
{
    if(GCD(a,m)){
        
        for(int i=0; i<=m-1; i++){
            
            if((a*i)%m == 1){
                return i;
            }
        }
    }
    
    else{
        
        return -1;
    }
}
