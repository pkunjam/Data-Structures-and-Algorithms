    class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            
            // Optimal Solution: O(N) time and O(1) space
            int i = 0;
            int j = i + 1;
            int profit = 0;

            while(j < prices.size())
            {
                profit = max(prices[j] - prices[i], profit);

                if (prices[i] < prices[j]) j++;
                else if (prices[i] > prices[j]) i++;
                else j++;
            }

            return profit;


            // int l = 0;
            // int r = l + 1;
            // int maxProfit = 0;

            // while (r < prices.size())
            // {
            //     if (prices[r] < prices[l]) l = r;

            //     else
            //     {
            //         int profit = prices[r] - prices[l];
            //         maxProfit = max(profit, maxProfit);
            //     }

            //     r++;
            // }

            // return maxProfit;


            // // Naive: O(N^2)
            // // Throws TLE
            // int buy = 0;
            // int sell = 0;
            // int profit = 0;

            // for(int i = 0; i < prices.size(); i++)
            // {
            //     buy = i;

            //     for(int j = i + 1; j < prices.size(); j++)
            //     {
            //         sell = j;
            //         profit = max(prices[sell] - prices[buy], profit);
            //     }
            // }

            // return profit;
        }
    };