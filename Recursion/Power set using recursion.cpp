{
//Initial Template for C++
// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
// Driver code
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        vector<string> ans = powerSet(s);
        sort(ans.begin(),ans.end());
        for(auto x:ans)
        cout<<x<<" ";
        cout<<endl;
        
        
    }
return 0;
} 
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//Complete this function

void subSet(string s, vector <string> &vec_str, int index=0, string curr = ""){
    
    int n = s.length();
    
    if(index == n){
        vec_str.push_back(curr);
        return;
    }
    
    subSet(s, vec_str, index+1, curr + s[index]);
    subSet(s, vec_str, index+1, curr);
}

vector <string> powerSet(string s)
{
   vector <string> vec_str;
   
   subSet(s,vec_str);
   return vec_str;
}
