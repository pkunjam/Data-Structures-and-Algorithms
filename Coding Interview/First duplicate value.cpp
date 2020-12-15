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


// O(n) time and O(1) space
#include <vector>
using namespace std;

int firstDuplicateValue(vector<int> array) { 
	
	for(int i=0; i<array.size(); i++)
	{
		int idx = abs(array[i]);

		if(array[idx-1] < 0)
			return idx;
		
		array[idx-1] *= -1;
	}
	
	return -1;
}
