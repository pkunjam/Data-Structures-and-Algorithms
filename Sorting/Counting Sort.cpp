// { Driver Code Starts
// C Program for counting sort
#include <stdio.h>
#include <string.h>
#define RANGE 255

// The main function that sort the given string arr[] in
// alphabatical order
void countSort(char arr[]);

// Driver program to test above function
int main()
{
    long int t;
    scanf("%ld",&t);
    while(t--)
    {
        long int n;
        scanf("%ld",&n);
        char arr[n+1];
        scanf("%s",arr);
        countSort(arr);
    printf("%s\n", arr);
    }return 0;
}
// } Driver Code Ends
// The main function that sort the given string arr[] in
// alphabatical order
void countSort(char arr[])
{
    int t=arr.size();
    int temp[t];
    
    for(int i=0;i<t;i++)
    {
        temp[i]=int(arr[i])
    }
    
    int k=123;
    int count[123];
    
    for(int i=97; i<k; i++)
    {
        count[i]=0;
    }
    
    for(int i=97; i<k; i++)
    {
        count[arr[]]
    }
    

}
