class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        // Optimal Solution: O(N^2)

        vector<vector<int>> res;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i- 1]) continue;

            int l = i + 1;
            int r = nums.size()-1;

            while(l < r)
            {
                int sum = nums[i] + nums[l] + nums[r];

                if (sum == 0)
                {
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;

                    while ( (nums[l] == nums[l - 1]) && (l < r) ) l++; // IMPORTANT to avoid duplicates
                }

                if(sum < 0)
                {
                    l++;
                }

                else
                {
                    r--;
                }
            }
            
        }

        return res;

        // // Brute force: O(N^3)
        // // TLE Exceeds
        // set<vector<int>> st;
        // vector<int> triplets;

        // for(int i = 0; i < nums.size(); i++)
        // {
        //     for(int j = i + 1; j < nums.size(); j++)
        //     {
        //         for(int k = j + 1; k < nums.size(); k++)
        //         {
        //             if( (nums[i] + nums[j] + nums[k] == 0) && i != j && i != k && j != k)
        //             {
        //                 triplets.push_back(nums[i], nums[j], nums[k]);

        //                 sort(triplets.begin(), triplets.end());

        //                 st.insert(triplets);
        //                 triplets.clear();
        //             } 
        //         }
        //     }
        // }

        // vector<vector<int>> res(st.begin(), st.end());

        // return res;
    }
};