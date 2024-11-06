class Solution {
public:
    bool isPalindrome(string s) {
        
        // O(N) with O(1) space
        int l = 0;
        int r = s.size() - 1;

        while (l < r)
        {
            while ( l < r && !isalnum( s[l]) ) l++;
            while ( l < r && !isalnum( s[r]) ) r--;

            if (tolower(s[l]) != tolower(s[r])) return false;
            
            l++;
            r--;
        }

        return true;

        // O(N) with O(N) space
        // string res = "";

        // for (int i = 0; i < s.size(); i++)
        // {
        //     if (isalnum(s[i]))
        //     {
        //         res += tolower(s[i]);
        //     }
        // }

        // s = res;

        // reverse(res.begin(), res.end());

        // if (res == s) return true;

        // return false;
    }
};