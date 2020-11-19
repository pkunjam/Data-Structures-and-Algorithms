#include <vector>
using namespace std;

// Add each of the array's elements to each of the finalSet's elements

vector<vector<int>> powerset(vector<int> array) 
{
	vector<vector<int>> finalSet = {{}};
	
	for(int i : array)
	{
		int len = finalSet.size();
		for(int j=0; j<len; j++)
		{
			vector<int> temp = finalSet[j];
			temp.push_back(i);
			finalSet.push_back(temp);
		}
	}
	
	return finalSet;
}
