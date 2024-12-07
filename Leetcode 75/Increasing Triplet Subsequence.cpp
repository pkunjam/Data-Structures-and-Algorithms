class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        // // Brute Force
        // if (nums.size() < 3) return false;

        // for (int i = 0; i < nums.size(); i++)
        // {
        //     int count = 1;

        //     for (int j = i + 1; j < nums.size(); j++)
        //     {
        //         if (nums[j] > nums[i])
        //         {
        //             count++;

        //             for (int k = j + 1; k < nums.size(); k++)
        //             {
        //                 if (nums[k] > nums[j]) return true;
        //             }
        //         }
        //     }
        // }

        // return false;

        // O(n) solution

        if (nums.size() < 3) return false;

        int first_num = INT_MAX;
        int second_num = INT_MAX;
        
        for (int i : nums)
        {
            if (i <= first_num)
            {
                first_num = i;
            }

            else if (i <= second_num)
            {
                second_num = i;
            }

            else
            {
                return true;
            }
        }

        return false;
    }
};