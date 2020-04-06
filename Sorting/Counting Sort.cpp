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

#include <iostream>

void countSort(char arr[])
{
    int t=26;
    int count[t];
    
    int n=0;
    
    for(int i=0;arr[i]!='\0';i++)
    {
        n++;
    }
    
    for(int i=0;i<t;i++)
    {
        count[i]=0;
    }
    
    for(int i=0;i<n;i++)
    {
        count[int(arr[i])-97]++;
    }
    
    for(int i=1;i<t;i++)
    {
        count[i]=count[i-1]+count[i];
    }
    
    char output[n+1];
    
    for(int i=n-1;i>=0;i--)
    {
        output[count[int(arr[i])-97]-1] = arr[i];
        count[int(arr[i])-97]--;
    }
    
    for(int i=0;i<n;i++)
    {
        arr[i]=output[i];
    }
    
}
