#include <bits/stdc++.h>
using namespace std;

void Print(int arr[], int n){
    
    unordered_set<int> s;
    vector<int> v;
    
    for(int i=0;i<n;i++)
    {
        int x=arr[i];
        int flag=1;
        
        if(x==0)
        {
            continue;
        }
        
        if(x==(1||2||3))
        {
            v.push_back(arr[i]);
        }
        
        else
        {
            while(x!=0)
            {
                if(x%10==0||x%10==4||x%10==5||x%10==6||x%10==7||x%10==8||x%10==9)
                {
                    flag=0;
                    break;
                }
                x=x/10;
            }
            
            if(flag==1)
            {
                v.push_back(arr[i]);
            }
        }
        
    }
    
    if(v.empty())
    {
        cout<<-1;
        return;
    }
    
    sort(v.begin(),v.end());
    
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

int main() {
	
	int t;
	
	cin>>t;
	
	while(t--)
	{
	    int n;
	    
	    cin>>n;
	    
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    Print(arr,n);
	    
	    cout<<endl;
	}
	return 0;
}
