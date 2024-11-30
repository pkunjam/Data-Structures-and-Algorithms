class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int greatest = 0;
        vector<bool> res;

        for (int i : candies)
        {
            if (i > greatest) greatest = i;
        }

        for (int i : candies)
        {
            if (i + extraCandies >= greatest) res.push_back(1);
            else res.push_back(0);
        }

        return res;
    }
};