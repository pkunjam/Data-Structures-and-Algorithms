class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        // // O(NLogN + N)
        // int n = nums.size();
        // set<int> s;

        // for(int i : nums)
        // {
        //     s.insert(i);
        // }

        // int k = 0;

        // for(auto it = s.begin(); it != s.end(); it++)
        // {
        //     nums[k] = *it;
        //     k++;
        // }

        // return k;

        // O(N)
        int n = nums.size();

        int i = 0;

        for(int j=1; j<n; j++)
        {
            if(nums[i] != nums[j])
            {
                nums[i+1] = nums[j];
                i++;
            }
        }

        return i+1;
    }
};