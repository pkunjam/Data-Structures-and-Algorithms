class Solution {
public:
    string reverseWords(string s) {
        
        stack<string> reverse;

        int l = 0;
        int r = l;

        string res = "";

        while (r < s.size())
        {
            while (s[r] == ' ' && r < s.size())
            {
                r++;
            }

            l = r;

            while (s[r] != ' ' && r < s.size())
            {
                r++;
            }

            if (l < r)
            {
                reverse.push(s.substr(l, r - l));
            }
            
        }

        while (!reverse.empty())
        {
            res += reverse.top();
            reverse.pop();

            if (!reverse.empty()) res += ' ';
        }

        return res;
    }

};