// { Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


 // } Driver Code Ends

// Function to calculate sum of all numbers present
// in a string containing alphanumeric characters
int findSum(string s)
{
	int sum=0;
	
	for(int i=0;i<s.length();i++)
	{
	    string str="";
	    int f=0;
	    
	    while(s[i]>='0' && s[i]<='9' && i<s.length())
	    {
	        str+=s[i];
	        i++;
	        f=1;
	    }
	    if(f==1)
	    {
	        sum+=stoi(str);
	    }
	    
	}
	return sum;
}

// { Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    cout << findSum(str);
        cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends
