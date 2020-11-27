using namespace std;

int longestPeak(vector<int> array) {
  
	int i=0;
	int j=1;
	int largest=0;
	int count=0;
	bool dec = false;
	bool inc = false;
	
	while( (!array.empty() || array.size()>1) && array[j] <= array[j-1])
	{
		j++;
	}
	
	i=j-1;
	
	while(j < array.size())
	{
		if(array[j] - array[j-1] > 0 && dec == true)
		{
			dec = false;
			i=j-1;
		}
		
		if(array[j] - array[j-1] > 0)
		{
			count = j-i+1;
		}
		
		if(array[j] - array[j-1] == 0)
		{
			count=0;
			i=j;
		}
		
		if(array[j] - array[j-1] < 0 && count>0)
		{
			dec = true;
			count = j-i+1;
			
			if(count > largest)
			{
				largest = count;
			}
		}
		
		j++;
	}
	
	return largest;
}
