#include<iostream>
using namespace std;
int main()
 {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    long long n,i;
	    cin>>n;
	    long long arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    
	    long long l=0,h=n-1,mid,ans,len;
	    
	    len = n-(arr[n-1]-arr[0]);
	    
	    while(l<=h)
	    {
	        int mid= l+(h-l)/2;
	        
	        if(arr[mid]==arr[mid-1] || arr[mid]==arr[mid+1])
	        {
	            ans=arr[mid];
	            break;
	        }
	        
	        else if(arr[mid]-arr[l]==mid-l)
	        {
	            l=mid+1;
	        }
	        
	        else
	        {
	            h=mid-1;
	        }
	    }
	    cout<<ans<<" "<<len<<endl;
	}
	return 0;
}
