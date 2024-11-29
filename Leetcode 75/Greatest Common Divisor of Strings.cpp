class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        string res = "";

        if (str1 + str2 != str2 + str1) return "";

        int x = gcd(str1.size(), str2.size());

        for (int i = 0; i < x; i++)
        {
            res += str1[i];
        }

        return res;
    }
};