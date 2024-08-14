class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {

        // O(N) with O(N + k) space
        // int n = nums.size();

        // if(n == 1 || n == 0 || k == 0) return;

        // k = k % n;

        // vector<int> temp;

        // for(int i=n-k; i<n; i++)
        // {
        //     temp.push_back(nums[i]);
        // }

        // vector<int> sub;

        // for(int j=0; j<n-k; j++)
        // {
        //     temp.push_back(nums[j]);
        // }

        // nums = temp;

        // O(N) with O(1) space
        int n = nums.size();
        k = k % n;

        reverse(nums.begin()+n-k, nums.end());
        reverse(nums.begin(), nums.begin()+n-k);
        reverse(nums.begin(), nums.end());

    }
};