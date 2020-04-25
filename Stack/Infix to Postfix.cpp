// { Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// The main function to convert infix expression
//to postfix expression

bool isOperator(char c){
    
    if( c == '^' || c == '*' || c == '/' || c == '+' || c == '-' ) return true;
    
    return false;
}

int Prec(char c){
    
    if(c == '^') return 2;
    
    if(c == '*' || c == '/') return 1;
    
    if(c == '+' || c == '-') return 0;
    
    return -1;
}

string infixToPostfix(string s)
{
    stack<char> stk;
    string res="";
    
    for(int i=0;i<s.size();i++)
    {
        if( (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') )
        {
            res+=s[i];
        }
        
        else if(isOperator(s[i]))
        {
            while(!stk.empty() && stk.top()!='(' && (Prec(stk.top()) >= Prec(s[i])))
            {
                res+=stk.top();
                stk.pop();
            }
            
            stk.push(s[i]);
        }
        
        else if(s[i]=='(')
        {
            stk.push(s[i]);
        }
        
        else if(s[i]==')')
        {
            while(!stk.empty() && stk.top()!='(')
            {
                res+=stk.top();
                stk.pop();
            }
            stk.pop();
        }
    }
    
    while(!stk.empty())
    {
        res+=stk.top();
        stk.pop();
    }
    
    return res;
}


// { Driver Code Starts.
//Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string exp;
        cin>>exp;
        cout<<infixToPostfix(exp)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
