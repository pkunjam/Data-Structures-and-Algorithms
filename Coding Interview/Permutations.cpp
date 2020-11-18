#include <vector>
using namespace std;

void Shuffle(vector<int> &array, int i, vector<vector<int>> &permutations);

vector<vector<int>> getPermutations(vector<int> array)
{
	
	if(array.empty()) return {};

	vector<vector<int>> permutations;
	Shuffle(array, 0, permutations);
	return permutations;
	
}

void Shuffle(vector<int> &array, int i, vector<vector<int>> &permutations)
{
	
	if(i == array.size()-1)
	{
		permutations.push_back(array);
	}
	
	else
	{
		for(int j=i; j<array.size(); j++)
		{
		swap(array[i], array[j]);
		Shuffle(array, i+1, permutations);
		swap(array[i], array[j]);
		}
	}
	
}
