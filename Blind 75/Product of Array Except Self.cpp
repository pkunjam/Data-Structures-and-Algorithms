class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        
        
        // // Brute Force: O(N^2) throws TLE
        // vector<int> res;

        // for(int i = 0; i < nums.size(); i++)
        // {
        //     int prod = 1;

        //     for(int j = 0; j < nums.size(); j++)
        //     {
        //         if(i != j)
        //         {
        //             prod *= nums[j];
        //         }
        //     }

        //     res.push_back(prod);
        // }

        // return res;

        // // Better: O(n) time with O(2n) space
        // vector<int> prefix;
        // vector<int> postfix;

        // int prod = 1;

        // for(int i = 0; i < nums.size(); i++)
        // {
        //     prefix.push_back(prod * nums[i]);
        //     prod = prod * nums[i];
        // }

        // prod = 1;

        // for(int i = nums.size() - 1; i >= 0; i--)
        // {
        //     postfix.push_back(nums[i] * prod);
        //     prod = nums[i] * prod;
        // }

        // reverse(postfix.begin(), postfix.end());

        // int pre = 1;
        // int post = 1;

        // for(int i = 0; i < nums.size(); i++)
        // {
        //     if (i == 0)
        //     {
        //         pre = 1;
        //         post = postfix[i+1];
        //     }

        //     else if (i == nums.size() - 1)
        //     {
        //         post = 1;
        //         pre = prefix[i-1];
        //     }

        //     else
        //     {
        //         pre = prefix[i-1];
        //         post = postfix[i+1];
        //     }

        //     nums[i] = pre * post;

        // }

        // return nums;

        // Best: O(n) time with O(1)
        vector<int> res;
        int pre = 1;

        for (int i = 0; i < nums.size(); i++)
        {
            res.push_back(pre);
            pre = pre * nums[i];
        }

        int post = 1;

        for(int i = nums.size() - 1; i >= 0; i--)
        {
            res[i] = post * res[i];
            post = post * nums[i];
        }

        return res;
    }
};