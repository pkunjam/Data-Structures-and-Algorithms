// O(n) time and O(1) space
using namespace std;

bool isMonotonic(vector<int> arr) {
	
	if(arr.empty() || arr.size()==1) return true;
	
	int i=0;
	int j=i+1;
	
	while(arr[i] == arr[j])
	{
		i++;
		j++;
	}
	
	if(arr[j] > arr[i])
		{
			while(j<arr.size())
			{
				if(arr[j] < arr[i])
				{
					return false;
				}
				
				i++;
				j++;
			}
			
		}
		
		else if(arr[j] < arr[i])
		{
			while(j<arr.size())
			{
				if(arr[j] > arr[i])
				{
					return false;
				}
				
				i++;
				j++;
			}
		}
	
	return true;
}
