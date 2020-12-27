// O(n) time and space
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> getNums(vector<int> arr)
{
    
    unordered_map <int, int> m;
    
    int missingNum;
    int repeated;
    
    for(int i=0; i<arr.size(); i++)
    {
        m[arr[i]]++;
        
        if(m[arr[i]] > 1)
        {
            repeated = arr[i];
        }
    }
    
    for(int j=1; j<=arr.size(); j++)
    {
        if(m.find(j) == m.end())
        {
            missingNum = j;
            break;
        }
    }
  
    return {repeated, missingNum};
}

int main() {
	
	int t;
	
	cin >> t;
	
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    vector<int> arr;
	    
	    for(int i=0 ;i<n; i++)
	    {
	        int num;
	        
	        cin >> num;
	        arr.push_back(num);
	    }
	    
	    arr = getNums(arr);
	    
	    cout << arr[0] << " " << arr[1] << endl;
	}
	
	
	return 0;
}
