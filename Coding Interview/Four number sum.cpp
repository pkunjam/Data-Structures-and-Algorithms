// O(n*n) average and O(n*n*n) worst time and O(n*n) space
#include <vector>
using namespace std;

vector<vector<int>> fourNumberSum(vector<int> array, int targetSum) {
  
	sort(array.begin(), array.end());
	
	vector<vector<int>> quad;
	
	int i=0;
	int j=array.size()-1;
	
	for(int i=0; i<array.size()-3; i++)
	{
		int k=i+1;
		int j=array.size()-1;
		int l=j-1;
		
		while(j>l)
		{
			k=i+1;
			l=j-1;
			
			while(k<l)
			{
				int sum = array[i]+array[j]+array[k]+array[l];

				if(sum == targetSum)
				{
					quad.push_back({array[i],array[j],array[k],array[l]});
					k++;
					l--;
				}

				else if(sum < targetSum)
				{
					k++;
				}

				else
				{
					l--;
				}
			}
			j--;
		}
	}
	
	return quad;
}
