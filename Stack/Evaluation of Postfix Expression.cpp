// { Driver Code Starts
// C++ program to evaluate value of a postfix expression
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// The main function that returns value of a given postfix expression
bool isOperator(char c){
    
    if( c == '*' || c == '/' || c == '+' || c == '-' ) return true;
    
    return false;
}

int perform(int c, int d, char op){
    
    if(op=='*') return c*d;
    if(op=='/') return c/d;
    if(op=='+') return c+d;
    if(op=='-') return c-d;
}

int evaluatePostfix(string &s)
{
    stack<int> stk;
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            stk.push(s[i]-'0');
        }
        
        else if(isOperator(s[i]))
        {
            int a = stk.top();
            stk.pop();
            
            int b = stk.top();
            stk.pop();
            
            int res = perform(b,a,s[i]);
            stk.push(res);
        }
    }
    
    return stk.top();
}


// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string str;
        cin>>str;
    
    cout<<evaluatePostfix(str)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
