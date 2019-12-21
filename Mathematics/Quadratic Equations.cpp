{
//Initial Template for C++
/* C++ program to find roots of a quadratic equation */
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main() {
	int T; 
	cin>>T; //input number of testcases
	
	while(T--)
	{
	    int a, b, c; 
	    cin>>a>>b>>c; //Input a, b, and c
	    
	    quadraticRoots(a,b,c);
	    cout<<endl;
	    
	}
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//You need to complete this function
void quadraticRoots(int a,int b, int c)
{
   
   //Your code here
   float D = (b*b)-(4*a*c);
   float r1 = (-b+sqrt(D))/(2.0*a);
   float r2 = (-b-sqrt(D))/(2.0*a);
   
   
   if(D >= 0)
   {
       cout<< floor(r1) <<" "<< floor(r2);
   }
   
   else
   {
       cout << "Imaginary";
   }
   
   
   
   
   // Your don't need to printline
   // It will automatically be 
   // handled by driver code
}

