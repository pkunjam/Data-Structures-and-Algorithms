class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        // O(N)
        // Insert all numbers into a set or map.
        // For each number, check if it's the start of a sequence (i.e., num - 1 doesn't exist
        // in the set).
        // If it's the start, keep incrementing the number to find the length of the sequence.

        if(nums.empty()) return 0;

        unordered_set<int> set(nums.begin(), nums.end());
        
        int maxLen = 0;
        
        for(int num : set)
        {
            if(set.find(num - 1) == set.end())
            {
                int currNum = num;
                int currLen = 1;

                while(set.find(currNum + 1) != set.end())
                {
                    currNum++;
                    currLen++;
                }

                maxLen = max(currLen, maxLen);
            }
        }

        return maxLen;

        // // O(NlogN)
        // if(nums.empty()) return 0;
        // if(nums.size() == 1) return 1;

        // set<int> set;

        // for(int i : nums)
        // {
        //     set.insert(i);
        // }

        // vector<int> sortedNums(set.begin(), set.end());

        // int len = 1;
        // int prevLen = 1;

        // for(int i = 0; i < sortedNums.size()-1; i++)
        // {
        //     if(sortedNums[i+1] != sortedNums[i] + 1)
        //     {
        //        len = max(prevLen, len);
        //        prevLen = 1;
        //        continue; 
        //     }

        //     prevLen++;
        // }

        // return max(len, prevLen);
    }
};