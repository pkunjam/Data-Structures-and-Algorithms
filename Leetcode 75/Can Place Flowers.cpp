class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        if (flowerbed.empty()) return false;

        int len = flowerbed.size();

        for (int i = 0; i < len; i++)
        {
            if (n == 0) break;
            
            if (flowerbed[i] == 0)
            {
                if (len == 1)
                {
                    n--;
                    break;
                }

                if (i == 0)
                {
                    if (flowerbed[i + 1] == 0)
                    {
                        flowerbed[i] = 1;
                        n--;
                    }
                }
                
                else if (i == len - 1)
                {
                    if (flowerbed[i - 1] == 0)
                    {
                        flowerbed[i] = 1;
                        n--;
                    }
                }

                else
                {
                    if (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0)
                    {
                        flowerbed[i] = 1;
                        n--;
                    }
                }
            }
        }
        
        return (n == 0) ? true: false;
    }
};