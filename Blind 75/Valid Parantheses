class Solution {
public:
    bool isValid(string s) {
        
        if (s[0] == ')' || s[0] == ']' || s[0] == '}') return false;

        int n = s.size() - 1;

        if (s[n] == '(' || s[n] == '[' || s[n] == '{') return false;

        stack<char> st;

        for (char c : s)
        {
            if (c == '(' || c == '[' || c == '{')
            {
                st.push(c);
            }

            else if (!st.empty())
            {
                if (c == ')' && st.top() == '(' || c == ']' && st.top() == '[' || c == '}' && st.top() == '{')
                {
                    st.pop();
                }

                else
                {
                    st.push(c);
                }
            }

            else
            {
                return false;
            }
        }

        if (st.empty()) return true;

        return false;
    }
};