class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        // O(N) solution using set
        unordered_set<int> set;

        for (int num : nums)
        {
            if(set.find(num) != set.end()) return true;

            set.insert(num);            
        }

        return false;

        // // O(N) solution using hashmap
        // unordered_map<int, int> map;

        // for (int n : nums)
        // {
        //     map[n]++;
        //     if (map[n] > 1) return true;
        // }
        
        // return false;       
        
        // Brute Force O(N^2)
        // Throws TLE
        // for(int i=0; i<nums.size(); i++)
        // {
        //     int val = nums[i];
        //     int count = 1;

        //     for(int j=i+1; j<nums.size(); j++)
        //     {
        //         if(nums[j] == val) count++;

        //     }

        //     if(count>= 2) return true;
        // }

        // return false;
        
    }
};