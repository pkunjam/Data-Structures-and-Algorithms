// if K<=33 || time and space O(K)
vector<int> Solution::getRow(int A) {
    
    int sum = pow(11, A);
    vector<int> sol;
    
    for(int i=0; i<=A; i++)
    {
        sol.push_back(sum%10);
        sum /= 10;
    }
    
    return sol;
}
