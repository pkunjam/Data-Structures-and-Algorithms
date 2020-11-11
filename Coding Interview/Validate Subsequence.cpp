using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  // Write your code here.
	
	unordered_map <int,int> umap;
	int temp[sequence.size()];
	
	// store the elements of sequence inside a hashmap to keep track of their frequency
	for(int i=0; i<sequence.size(); i++)
	{
		umap[sequence[i]]++;
	}
	
	int k=0;
	
	for(int j=0; j<array.size(); j++)
	{
		// if any element is present in both the arrays then store it inside the temp array
		if(umap.find(array[j]) != umap.end())
		{
			temp[k] = array[j];
			umap[array[j]]--;
			k++;
		}
	}
	
	// recheck if temp and sequence array are equal
	for(int t=0; t<sequence.size(); t++)
	{
		
		if(temp[t] != sequence[t])
		{
			return false;
		}
	}
	
  return true;
}
