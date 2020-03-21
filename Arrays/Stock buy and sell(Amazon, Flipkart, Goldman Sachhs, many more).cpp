// { Driver Code Starts
// Program to find best buying and selling days

#include <bits/stdc++.h>
using namespace std;
 
// solution structure
struct Interval
{
    int buy;
    int sell;
};



 // } Driver Code Ends
// solution structure
/* struct Interval
 {
     int buy;
     int sell;
 };*/

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n)
{
    
    int buy, sell;
    
    int i=0, profit=0;
    bool flag=true;
    
    while(i<n)
    {
        if(i==0 && price[i] < price[i+1])
        {
            buy = i;
            flag = false;
        }
        
        if(i==n-1 && price[i] > price[i-1])
        {
            sell = i;
            cout<<"("<<buy<<" "<<sell<<") ";
            profit += (buy - sell);
            flag = true;
        }
        
        if(price[i] <= price[i-1] && price[i] < price[i+1] && flag)
        {
            buy = i;
            flag = false;
        }
        
        else if((price[i] < price[i-1] && price[i] == price[i+1]) || (price[i] == price[i-1] && price[i] == price[i+1]))
        {
            i++;
            continue;
        }
        
        if(price[i] > price[i-1] && price[i] > price[i+1] && !flag)
        {
            sell = i;
            cout<<"("<<buy<<" "<<sell<<") ";
            profit += (buy - sell);
            flag = true;
        }
        
        i++;
    }
    
    if(profit == 0)
    {
        cout<<"No Profit";
    }

}

// { Driver Code Starts.
 
// Driver program to test above functions
int main()
{   
    
    int price[10000],n,i,T;
    
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&price[i]);
    // fucntion call
    stockBuySell(price, n);
    cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
