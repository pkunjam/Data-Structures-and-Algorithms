// Recursive
using namespace std;

int getNthFib(int n) {
  // Write your code here.
	
	if(n==0) return 0;
	if(n==1) return 0;
	if(n==2) return 1;
	
	return getNthFib(n-1) + getNthFib(n-2);
}

// Iterative
using namespace std;

int getNthFib(int n) {
  // Write your code here.
	int arr[] = {0, 1};
	int j = 3;
	
	while(j<=n)
	{
		int Nth = arr[0] + arr[1];
		arr[0] = arr[1];
		arr[1] = Nth;
		j++;
	}
	
	return n <= 1 ? 0 : arr[1];
}
