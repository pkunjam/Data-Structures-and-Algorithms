#include <vector>

using namespace std;

vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) 
{
	
	sort(array.begin(), array.end());

	vector<vector<int>> triplets;
	
	for(int i=0; i<array.size()-2; i++)
	{
		int j=i+1;
		int k=array.size()-1;
		
		while(j<k)
		{
			int sum = array[i] + array[j] + array[k];
			
			if(sum < targetSum)
			{
				j++;
			}
			
			else if(sum > targetSum)
			{
				k--;
			}
			
			else
			{
				triplets.push_back({array[i], array[j], array[k]});
				j++;
				k--;
			}
		}
	}
	
	return triplets;
}
