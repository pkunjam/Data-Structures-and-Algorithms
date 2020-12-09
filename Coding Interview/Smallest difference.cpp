// O(N^2) solution

#include <vector>
using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
  // Write your code here.
	
	pair<int, int> map;
	int minDiff = abs(arrayOne[0] - arrayTwo[0]);
	
	for(int i=0; i<arrayOne.size(); i++)
	{
		for(int j=0; j<arrayTwo.size(); j++)
		{
			int currDiff = abs(arrayOne[i] - arrayTwo[j]);
			
			if(currDiff < minDiff)
			{
				minDiff = currDiff;
				map = make_pair(arrayOne[i], arrayTwo[j]);
			}
		}
	}
	
  return {map.first, map.second};
}
