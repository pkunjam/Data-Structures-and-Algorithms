class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        //O(N^2) Solution
        // int maxLen = 0;

        // for(int i=0; i<s.size(); i++)
        // {
        //     vector<int> hash(256,0);
        //     for(int j=i; j<s.size(); j++)
        //     {
        //         if(hash[s[j]] == 1) break;

        //         maxLen = max(j-i+1, maxLen);
        //         hash[s[j]] = 1;
        //     }
        // }

        // return maxLen;

        
        //O(N) Solution
        vector<int> map(256,-1); // map to store the char and its index

        int maxLen = 0;
        int l = 0;
        int r = 0;
        int n = s.size();

        while(r < n)
        {
            if(map[s[r]] != -1)
            {
                // if the index of repreating character at r is greater than or equal to l then put the l at the index + 1 
                // where the repeating character was last found so that l won't go in the backward direction
                if(map[s[r]] >= l) 
                {
                    l = map[s[r]] + 1; 
                }
            }

            maxLen = max(r-l+1, maxLen);
            map[s[r]] = r; // update the index of the latest character ar r
            r++;
        }

        return maxLen;

        // // Using unordered map: O(N)
        // unordered_map<char, int> map;

        // int l = 0;
        // int maxLen = 0;

        // for(int r = 0; r < s.size(); r++)
        // {
        //    if(map.find(s[r]) != map.end() && map[s[r]] >= l)
        //    {
        //         l = map[s[r]] + 1;
        //    }

        //    map[s[r]] = r;

        //    maxLen = max(r - l + 1, maxLen);
        // }

        // return maxLen;

        // //Using Set: O(N)
        // set<int> set;

        // int maxLen = 0;
        // int l = 0;
        // int r = 0;
        // int n = s.size();

        // while(r < n)
        // {
        //     while(set.find(s[r]) != set.end())
        //     {
        //         set.erase(s[l]);
        //         l++;
        //     }

        //     set.insert(s[r]);
        //     maxLen = max(maxLen, r - l + 1);
        //     r++;
        // }

        // return maxLen;
    }
};