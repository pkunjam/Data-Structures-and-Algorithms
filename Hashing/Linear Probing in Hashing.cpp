// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


void linearProbing(int hash[],int hashSize,int arr[],int sizeOfArray);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int hashSize;
	    cin>>hashSize;
	    int hash[hashSize];
	    
	    
	    int  sizeOfArray;
	    cin>>sizeOfArray;
	    int arr[sizeOfArray];
	    
	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];
	    
	    
	    
	    for(int i=0;i<hashSize;i++)
	    hash[i]=-1;
	    
	    linearProbing( hash, hashSize, arr, sizeOfArray);
	    
	    for(int i=0;i<hashSize;i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	    
	}
	return 0;
}// } Driver Code Ends
//Complete this function
void linearProbing(int hash[],int hashSize,int arr[],int sizeOfArray)
{
    for(int i=0;i<sizeOfArray;i++)
    {
        int key = arr[i]%hashSize;
        int j=0;
        
        while(j<hashSize)
        {
            if(hash[(key+j)%hashSize]==-1)
            {
                hash[(key+j)%hashSize]=arr[i];
                break;
            }
            j++;
        }
    }
}
