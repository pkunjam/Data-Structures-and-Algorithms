class Solution
{
public:
    int characterReplacement(string s, int k)
    {

        // O(N)
        unordered_map<char, int> count;

        int l = 0;
        int r = 0;
        int res = 0;
        int maxF = 0;

        for (r = 0; r < s.length(); r++)
        {
            count[s[r]]++;

            maxF = max(maxF, count[s[r]]);

            // If window length (r - l + 1) - max occuring character's frequency > k
            // Then decrement the count of that char while shriking the window
            while ((r - l + 1) - maxF > k)
            {
                count[s[l]]--;
                l++;
            }

            res = max(res, r - l + 1);
        }

        return res;
    }
};