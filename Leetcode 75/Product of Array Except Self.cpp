class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> prefix;
        vector<int> suffix;

        int n = nums.size();

        int curr = 1;

        for (int i = 0; i < n; i++)
        {
            curr *= nums[i];
            prefix.push_back(curr);
        }

        curr = 1;

        for (int i = n - 1; i >= 0; i--)
        {
            curr *= nums[i];
            suffix.push_back(curr);
        }

        reverse(suffix.begin(), suffix.end());

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                nums[i] = 1 * suffix[i + 1];
            }

            else if (i == n - 1)
            {
                nums[i] = prefix[i - 1] * 1;
            }

            else
            {
                nums[i] = prefix[i - 1] * suffix[i + 1];
            }
        }

        return nums;
    }
};