// O(N^2) time

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


// O( nlog(n) + mlog(m)) time and O(1) space

#include <vector>
using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
  
	sort(arrayOne.begin(), arrayOne.end());
	sort(arrayTwo.begin(), arrayTwo.end());
	
	int i=0;
	int j=0;
	int currDiff = abs(arrayOne[0] - arrayTwo[0]);
	int minDiff = currDiff;
	
	pair<int, int> smallestDiff;
	
	while(i < arrayOne.size() && j < arrayTwo.size())
	{
		int firstNum = arrayOne[i];
		int secondNum = arrayTwo[j];
		
		if(firstNum < secondNum)
		{
			currDiff = abs(firstNum - secondNum);
			i++;
		}
		
		else if(firstNum > secondNum)
		{
			currDiff = abs(firstNum - secondNum);
			j++;
		}
		
		else
		{
			return {firstNum, secondNum};
		}
		
		if(currDiff < minDiff)
		{
			minDiff = currDiff;
		  smallestDiff = make_pair(firstNum, secondNum);
		}
	}
	
	return {smallestDiff.first, smallestDiff.second};
}

