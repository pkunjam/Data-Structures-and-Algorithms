class Solution {
public:
    string reverseVowels(string s) {
        
        unordered_map<char, int> vowels;

        vowels.insert({{'a', 1}, {'A', 1},
                       {'e', 1}, {'E', 1},
                       {'i', 1}, {'I', 1},
                       {'o', 1}, {'O', 1},
                       {'u', 1}, {'U', 1}}
                     );

        int l = 0;
        int r = s.size() - 1;

        while (l < r)
        {
            while (vowels.find(s[l]) == vowels.end() && l < r) l++;
            while (vowels.find(s[r]) == vowels.end() && l < r) r--;

            swap(s[l], s[r]);
            
            l++;
            r--;
        }

        return s;
    }
};