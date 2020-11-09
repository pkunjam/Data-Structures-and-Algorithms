// O(n) time and O(1) space
#include <vector>

using namespace std;

vector<int> moveElementToEnd(vector<int> array, int toMove) {
	
	int i=0;
	int j=i+1;
	
	while( j<array.size() )
	{
		if(array[i] == toMove && array[i] != array[j])
		{
			swap(array[i], array[j]);
			i++;
			j++;
		}
		
		else if (array[i] == toMove &&  array[i] == array[j] )
		{
			j++;
		}
		
		else
		{
			i++;
			j++;
		}
	}
	
	return array;
}
