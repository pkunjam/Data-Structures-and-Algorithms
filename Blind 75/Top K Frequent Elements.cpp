class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        // // O(N): Bucket Sort
        // 1. Frequency Map: First, I create a hash map to count the frequency of each element in the array.
        // 2. Buckets: I create an array of buckets, where the index represents the frequency, and each bucket 
        // contains the list of elements that have that specific frequency.
        // 4. Collect Results: Starting from the end of the bucket array (representing the highest frequency), 
        // I collect elements until I have k elements.
        
        unordered_map<int, int> map;

        for(int num : nums)
        {
            map[num]++;
        }
        
        vector<vector<int>> freq(nums.size() + 1);

        for(const auto &it : map)
        {
            freq[it.second].push_back(it.first);
        }

        vector<int> res;

        for(int i = freq.size() - 1; i >= 0; --i)
        {
            for(int j = 0; j < freq[i].size(); j++)
            {
                if (k == 0) return res;

                res.push_back(freq[i][j]);
                k--;
            }
        }

        return res;

    //     // O(N * LogN)
    //     vector<int> res;
    //     map<int, int> map;

    //     for(auto i : nums)
    //     {
    //         map[i]++;
    //     }

    //     vector<pair<int,int>> vec(map.begin(), map.end());

    //     // find the most frequent element
    //     // add it to the res
    //     // remove it from the vec
    //     // run it k times
    //     for(int i = 1; i<=k; i++)
    //     {
    //         pair<int,int> max = {0,0};

    //         for(int j = 0; j<vec.size(); j++)
    //         {
    //             if(vec[j].second > max.second)
    //             {
    //                 max = vec[j];
    //             }
    //         }

    //         res.push_back(max.first);
    //         vec.erase(remove(vec.begin(), vec.end(), max),vec.end());
    //     }

    //     cout << endl;

    //     return res;

    }

};