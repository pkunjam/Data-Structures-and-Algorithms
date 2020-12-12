// O(n) time and O(n) space
#include <vector>
using namespace std;

int firstDuplicateValue(vector<int> array) {
	
	unordered_map<int,int> map;
	
	for(int i=0; i<array.size(); i++)
	{
		map[array[i]]++;
		if(map[array[i]] > 1)
		{
			return array[i];
		}
	}
	
	return -1;
}
