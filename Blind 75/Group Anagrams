class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        // O(mlogn)
        // 1. Iterate over each string and sort it to create a key.
        // 2. Use the sorted string as a key in the hash map and append the original string to the value list.
        // 3. Collect the lists from the hash map as the grouped anagrams.
        
        vector<vector<string>> res;
        unordered_map<string, vector<string>> map;

        for (string s : strs)
        {
            string sortedStr = s;
            sort(sortedStr.begin(), sortedStr.end());

            map[sortedStr].push_back(s);
        }

        for (auto &it : map)
        {
            res.push_back(it.second);
        }

        return res;
    }
};