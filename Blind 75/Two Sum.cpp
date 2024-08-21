class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // // Brute Force: O(N^2)
        // vector<int> res;

        // for(int i = 0; i < nums.size(); i++)
        // {
        //     for (int j = 0; j < nums.size(); j++)
        //     {
        //         if(nums[i] + nums[j] == target && (i != j) )
        //         {
        //             res.push_back(i);
        //             res.push_back(j);
        //             return res;
        //         }
        //     }
        // }

        // return res;

        // Optimal: O(N) TC & space
        unordered_map<int, int> mp;
        
        for(int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];

            if(mp.find(diff) !=  mp.end())
            {
                return {i, mp[diff]};
            }

            mp.insert({nums[i], i});
        }

        return {};
    }
};