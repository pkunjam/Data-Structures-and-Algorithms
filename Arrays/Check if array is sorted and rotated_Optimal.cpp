class Solution {
public:
    bool check(vector<int>& nums) {
        
        int n = nums.size();

        for(int i=1; i<n; i++)
        {
            if(nums[i] < nums[i-1])
            {
                int j = i+1;

                for(j=i+1; j<n; j++)
                {
                    if(nums[j] < nums[j-1]) return false;
                }

                if(nums[j-1] > nums[0]) return false;
            }
        }

        return true;
    }
};