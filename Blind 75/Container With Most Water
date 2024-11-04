class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int l = 0;
        int r = height.size()-1;
        int maxWater = 0;

        while (l < r)
        {
            maxWater = max((r - l) * min(height[l], height[r]), maxWater);

            if (height[l] <= height[r]) l++;
            else r--;
        }
        
        return maxWater;
    }
};