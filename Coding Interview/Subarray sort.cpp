//O(n) time and O(n) space
#include <vector>
using namespace std;

vector<int> subarraySort(vector<int> array) {
  
	vector<int> temp = array;
	sort(temp.begin(), temp.end());
	
	int i=0;
	
	while(i < temp.size())
	{
		if(temp[i] != array[i])
		{
			break;
		}
		
		i++;
	}
	
	int j=temp.size()-1;

	while(j >= 0)
	{
		if(temp[j] != array[j])
		{
			break;
		}
		
		j--;
	}
	
	if(i == array.size() || j == 0)
		return {-1,-1};
	
	return {i,j};
}
