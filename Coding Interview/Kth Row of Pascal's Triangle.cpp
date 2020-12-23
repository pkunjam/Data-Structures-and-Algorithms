// using nCr logic || time and space O(N)
vector<int> Solution::getRow(int A) {
    
    int j=A+1;
    int val = 1;
    vector<int> sol;
    
    for(int i=1; i<=j; i++)
    {
        sol.push_back(val);
        val = val * (j-i)/i;
    }
    
    
    return sol;
}
