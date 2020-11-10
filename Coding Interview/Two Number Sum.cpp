#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
	
	sort(array.begin(), array.end());
		
	int i = 0;
	int j = array.size()-1;
	
	while(i<j)
	{
		int currSum = array[i] + array[j];
		
		if(currSum == targetSum)
			return {array[i], array[j]};
		
		else if(currSum < targetSum)
			i++;
		
		else if(currSum > targetSum)
			j--;
	}
	
  return {};
}
