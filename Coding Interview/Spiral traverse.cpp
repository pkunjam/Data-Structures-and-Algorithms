// O(n) time and O(n) space
using namespace std;

vector<int> spiralTraverse(vector<vector<int>> array) {
	
	vector<int> spiral;
	int startRow = 0;
	int endRow = array.size()-1;
	int startCol = 0;
	int endCol = array[0].size()-1;
	
	while(startRow <= endRow && startCol <= endCol)
	{
		for(int i=startCol; i<=endCol; i++)
		{
			spiral.push_back(array[startRow][i]);
		}
		
		for(int i=startRow+1; i<=endRow; i++)
		{
			spiral.push_back(array[i][endCol]);
		}
		
		for(int i=endCol-1; i>=startCol; i--)
		{
			if(startRow == endRow) break;
			
			spiral.push_back(array[endRow][i]);
		}
		
		for(int i=endRow-1; i>startRow; i--)
		{
			if(startCol == endCol) break;
			
			spiral.push_back(array[i][startRow]);
		}
		
		startRow++;
		endRow--;
		startCol++;
		endCol--;
	}
	
  return spiral;
}
