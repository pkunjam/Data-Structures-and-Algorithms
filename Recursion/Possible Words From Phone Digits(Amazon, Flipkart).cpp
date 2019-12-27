{
#include <bits/stdc++.h>
#include <string>
using namespace std;
void possibleWords(int a[],int n);
int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	  possibleWords(a,N);
	   cout << endl;
	}
	
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
//Complete this function

void permute(int a[], int N, int index, string curr){
    
    string str[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    if(N == index){
        cout<<curr<<" ";
        return;
    }
    
    else{
        for(int i=0;i<str[a[index]].length();i++){
            permute(a,N,index+1, curr+str[a[index]].at(i));
        }
    }
}

void possibleWords(int a[],int N)
{
    int l=0;
   
    
    string curr = "";
    permute(a,N,l,curr);
}
