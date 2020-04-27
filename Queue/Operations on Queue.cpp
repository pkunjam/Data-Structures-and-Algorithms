// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++


 // Function to push element on rear of queue
void enqueue(queue<int> &s,int x)
{
    s.push(x);
}
 // Function to remove front element from queue
void dequeue(queue<int> &s)
{
    s.pop();
}
 // Function to find the front element of queue
void front(queue<int> &s)
{
    int x=s.front();//Your code here
    cout<<x<<" "<<endl; 
}
 // Function to find the element in queue
void find(queue<int> s, int val)
{
    bool exists=false;
    
    while(!s.empty())
    {
        if(s.front()==val)
        {
            exists=true;
            break;
        }
        s.pop();
    }
    
    if(exists==true){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}

// { Driver Code Starts.


int main() {
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    queue<int> s;
	    int q;
	    cin>>q;
	    while(q--){
	        char ch;
	        cin>>ch;
	        
	        if(ch=='i')
	        {
	            int x;
	            cin>>x;
	            
	            enqueue(s,x);
	            
	        }
	        else if(ch=='r')
	        {
	            dequeue(s);
	        }
	        else if(ch=='h')
	        {
	            front(s);
	        }
	        else if(ch=='f')
	        {
	            int x;
	            cin>>x;
	            find(s,x);
	        }
	        
	    }
	}
	return 0;
}


  // } Driver Code Ends
