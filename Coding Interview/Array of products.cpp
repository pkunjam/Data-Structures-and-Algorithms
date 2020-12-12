// O(N*N) time and O(N) space
#include <vector>

using namespace std;

vector<int> arrayOfProducts(vector<int> array) {
  
	vector<int> result;
	
	for(int i=0; i<array.size(); i++)
	{
		int mult=1;
		for(int j=0; j<array.size(); j++)
		{
			if(j == i)
				continue;
			mult *= array[j];
		}
		result.push_back(mult);
	}
	
  return result;
}


// O(n) time and O(n) space
#include <vector>

using namespace std;

vector<int> arrayOfProducts(vector<int> array) {
	
	vector<int> product (array.size(),1);
	
	int leftrunningProduct = 1;
	for (int i=0; i<array.size(); i++)
	{
		product[i] = leftrunningProduct;
		leftrunningProduct *= array[i];
	}
	
	int rightrunningProduct = 1;
	for(int i=array.size()-1; i>=0; i--)
	{
		product[i] *= rightrunningProduct;
		rightrunningProduct *= array[i];
	}
		
  return product;
}
