class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int j = 0;

        for (char c : t)
        {
            if (c == s[j])
            {
                j++;
            }
        }

        if (j < s.size()) return false;

        return true;
    }
};