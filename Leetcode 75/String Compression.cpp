class Solution {
public:
    int compress(vector<char>& chars) {
        
        string s = "";
        
        int i = 0;
        
        
        while (i < chars.size())
        {
            int count = 0;
            char prev = chars[i];
            
            while (i < chars.size() && chars[i] == prev)
            {
                i++;
                count++;
            }

            if (count > 1)
            {
                s += prev;
                s += to_string(count);
            }

            else
            {
                s += prev;
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            chars[i] = s[i];
        }

        return s.size();
    }
};